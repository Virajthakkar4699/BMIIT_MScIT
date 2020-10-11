#6.To print Fibonacci series from given range of n-m.
n=1
m=int(input('Enter m  '))
n1,n2=0,1
i=0
print("Fibonacci series : ")
while i<m:
    print(n1)
    n3=n1+n2
    n1=n2
    n2=n3
    i=i+1
    
