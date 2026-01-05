# utils/qianwen_client.py
import os
import json
import requests
from typing import Optional

# 在文件顶部 import:
from utils.qianwen_client import call_qianwen
from prompt_template import QA_TEMPLATE, QA_CHAT_TEMPLATE  # 你已有的 prompt 模板

QIANWEN_API_URL = os.environ.get("QIANWEN_API_URL")
QIANWEN_API_KEY = os.environ.get("QIANWEN_API_KEY")

def call_qianwen(prompt: str, max_tokens: int = 1024, timeout: int = 30) -> str:
    """
    Generic HTTP client for Qianwen-like endpoints.
    NOTE: adjust 'data' structure to match your provider's exact API.
    """
    if not QIANWEN_API_URL:
        raise RuntimeError("QIANWEN_API_URL not set")

    headers = {
        "Content-Type": "application/json",
        "Authorization": f"Bearer {QIANWEN_API_KEY}" if QIANWEN_API_KEY else ""
    }

    # Default JSON payload — many vendors accept {"prompt": "..."} or {"input": "..."}.
    # If your provider expects a different JSON schema, replace this block accordingly.
    payload = {
        "prompt": prompt,
        "max_tokens": max_tokens,
        # you can add other fields like temperature, top_p, stream, etc.
    }

    resp = requests.post(QIANWEN_API_URL, headers=headers, json=payload, timeout=timeout)
    resp.raise_for_status()
    data = resp.json()

    # Generic extraction: many providers return {"result": "..."} or {"choices":[{"text": "..."}]}
    if isinstance(data, dict):
        if "result" in data:
            return data["result"]
        if "choices" in data and len(data["choices"]) > 0:
            # OpenAI-like response
            return data["choices"][0].get("text") or data["choices"][0].get("message", {}).get("content", "")
        # some vendors return {"data":[{"text":"..."}]}
        if "data" in data and isinstance(data["data"], list) and len(data["data"]) > 0:
            return data["data"][0].get("text", "")
    # fallback: return raw text
    return resp.text
    
    
    
