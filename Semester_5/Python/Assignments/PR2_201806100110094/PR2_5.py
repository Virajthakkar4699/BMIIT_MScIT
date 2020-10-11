#5.To find reverse of number.
num=int(input('Enter number '))
rev=0
while(num>0):
    digit=num%10
    rev=digit+(rev*10)
    num=num//10
print("Reverse number : ",rev)


