email=input("email address :")
result=re.findall(r'\S\w+@\S\w+.\S\w+',email)
print("E-mail :",result)