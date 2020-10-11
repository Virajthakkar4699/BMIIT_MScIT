#Write a Python program to add an item in a tuple.

value=12,49,90,66,33
addvalue=input("Enter value to be added : ")
l=list(value)
l.append(addvalue)
value=tuple(l)
for item in value:
    print(item,end=",")
