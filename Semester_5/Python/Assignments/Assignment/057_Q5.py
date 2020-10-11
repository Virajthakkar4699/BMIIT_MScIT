#201806100110094
n=int (input("Enter Num:-"))
arr=[]
for i in range (n):
    arr.append([])
    arr[i].append(1)
    for j in range(1, i):
        #print(end=" ")
        arr[i].append(arr[i - 1][j - 1]+arr[ i- 1][j])
    if n!=0:
        arr[i].append(1)
for i in range (n):
    print (" " * (n-i),end=" ",sep=" ")
    for j in range (0,i+1):
        print ('{0:1}'.format(arr[i][j]), end=" ",sep=" ")
    print()
    
