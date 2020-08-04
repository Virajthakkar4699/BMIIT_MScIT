import phonenumbers
from phonenumbers import carrier

mobileno=input("enter:- ")
service_provider=phonenumbers.parse(mobileno)
print(carrier.name_for_number(service_provider,"en"))
ch_number = phonenumbers.parse(mobileno, "en")
print(ch_number)
input("")
