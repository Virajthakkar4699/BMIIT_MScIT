'''
    $  
   @ @  
  $ $ $  
 @ @ @ @  
$ $ $ $ $
'''
n=5
k=n-1
for rows in range(0,n):
    for cols in range(0,k):
        print(end=" ")
    
    for cols in range(0,rows+1):
        if(rows%2!=0):
            print("@",end=" ")
        else:
            print("$",end=" ")
    k=k-1        
    print(" ")
