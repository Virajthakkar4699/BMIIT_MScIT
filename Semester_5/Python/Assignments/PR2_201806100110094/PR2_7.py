#7. To check Armstrong Number
num=int(input('Enter Number  '))
temp=num
sum=0
while temp>0:
    digit=temp%10
    sum=sum+digit ** 3
    temp=temp // 10

if num==sum:
    print(num,"is armstrong")
else:
    print(num,"is not armstrong ")
