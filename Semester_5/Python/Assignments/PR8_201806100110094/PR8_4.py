x=[]

k=int(input("Enter the value of size of list:"))

for i in range(k):
    j=int(input("Enter a value in list:"))
    x.append(j)

print(x)

def multiply_fun():
    a=[]
    b=int(input("Enter a number for multiply:"))
    
    for i in range(len(x)):  
        a.append(x[i]*b)
    print(a)
    
multiply_fun()
