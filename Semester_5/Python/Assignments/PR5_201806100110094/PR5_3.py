#Write a Python program to check whether an element exists within a tuple.

t=(15,67,90,2,3,1)
value=input("Enter value to check : ")
if value in t:
    print(value," exists")
else:
    print(value," value not in tuple")
