'''
Write a program for creating a new dictionary with keys from
sequence and set default value to all values 10.
Take Sequence like (1, 10, “Python”,’A’,4.5)
'''

dict={}
data = int(input("Enter number  of element you want to input :"))
value=input("Enter the value :")

for i in range(data):
    key=input("Enter the key:")
    dict.update({key:value})
print(dict)
