# ⚠️ Cloud Vulnerability Demo Repository

**DANGER:** This repository contains **intentionally vulnerable code**. 
DO NOT deploy this to a production environment. DO NOT use real credentials in this repository.

## Project Purpose
This project is designed to test VulCan scanner. Each branch represents a different microservice or infrastructure component written in a different language, containing specific security flaws.

## Branch Structure & Vulnerabilities

| Branch | Component | Language | Vulnerability Type |
| :--- | :--- | :--- | :--- |
| **`feature/data-processor`** | Data Processing Service | **Python** | Hardcoded AWS Creds, SQL Injection, RCE |
| **`infra/aws-policies`** | IAM Policies | **JSON** | Overly Permissive Policies (Public Write Access) |
| **`frontend/payment-widget`** | Payment UI | **JavaScript** | Leaked API Tokens (Stripe), Client-side Secrets |
| **`ops/k8s-deployment`** | Kubernetes Manifests | **YAML** | Privileged Containers, Root User Execution |
| **`legacy/core-service`** | Backend Service | **C++** | OS Command Injection, Buffer Overflow risks |
