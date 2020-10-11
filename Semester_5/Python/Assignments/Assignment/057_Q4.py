import re

a = input("Enter the String = ")

f = r"A.*a"

r = re.findall(f, a)
print("Characters between A and a = ",re.findall(f,a))

r = str(r)
r = re.sub('[\[\'\]\']', '', r)

l = len(r)
print(l)      
print("Number of characters between A and a including both A and a = ", len(str(r)))

print("String in Title Case = ", a.istitle())






