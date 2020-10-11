'''
    A  
   B B  
  C C C  
 D D D D  
E E E E E
'''
n=5
k=n-1
x=65
for rows in range(0,n):
    ch=chr(x)
    x=x+1
    for cols in range(0,k):
        print(end=" ")
    k=k-1
    for cols in range(0,rows+1):
        print(ch,end=" ")
    print(" ")
