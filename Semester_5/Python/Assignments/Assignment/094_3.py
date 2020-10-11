n = int(input("enter a number of value "))
d = {}

for i in range(n):
    keys = int(input("Enter a key : ")) 
    values = keys 
    d[keys] = values
print(d)

print()
print("The keys are")
print(d.keys())
print()

print("The values are")
print(d.values())
print()

print("Enter new value")
k = int(input("Enter a key : "))
v = int(input("Enter a value : "))
d.update({k:
          v})
print("value update success!!")
print()

print("Copy dictionary:")
new = d.copy()
print("old dictionary")
print(d)
print("new copied dictionary")
print(new)
