#9.To print sum of odd numbers up to given N number.
n=int(input('Enter n : '))
sum=0
for i in range(1,n+1):
    if(i%2!=0):
        sum=sum+i
print("Sum of odd Numbers : ",sum)
