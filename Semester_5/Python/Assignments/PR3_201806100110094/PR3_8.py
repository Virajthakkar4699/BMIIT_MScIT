'''
    10 
   1010 
  101010 
 10101010 
1010101010
'''
n=5
k=n-1
for rows in range(0,n):
    for cols in range(0,k):
        print(end=" ")
    k=k-1
    for cols in range(0,rows+1):
        print("10",end="")
    print(" ")
