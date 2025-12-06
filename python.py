import boto3
import os
import sqlite3

def connect_to_cloud():
    aws_access_key = "AKIAIOSFODNN7EXAMPLE"
    aws_secret_key = "wJalrXUtnFEMI/K7MDENG/bPxRfiCYEXAMPLEKEY"

    s3 = boto3.client(
        's3',
        aws_access_key_id=aws_access_key,
        aws_secret_access_key=aws_secret_key
    )
    return s3

def get_user_data(user_id):
    conn = sqlite3.connect('users.db')
    cursor = conn.cursor()

    query = f"SELECT * FROM users WHERE id = '{user_id}'"
    
    cursor.execute(query)
    return cursor.fetchall()
