import requests
import json

URL = 'https://www.sms4india.com/api/v1/sendCampaign'

# get request
def sendPostRequest(reqUrl, apiKey, secretKey, useType, phoneNo, senderId, textMessage):
  req_params = {
  'IDL601G5FNIIUBRBCINR9BM2OMX5QQ97':apiKey,
  '009Y2ABKD36FWX7G':secretKey,
  'stage':useType,
  '9773143585': phoneNo,
  'test message sent by viraj':textMessage,
  'vitest':senderId
  }
  return requests.post(reqUrl, req_params)

# get response
response = sendPostRequest(URL, 'provided-api-key', 'provided-secret', 'prod/stage', 'valid-to-mobile', 'active-sender-id', 'message-text' )
"""
  Note:-
    you must provide apikey, secretkey, usetype, mobile, senderid and message values
    and then requst to api
"""
# print response if you want
print (response.text)
