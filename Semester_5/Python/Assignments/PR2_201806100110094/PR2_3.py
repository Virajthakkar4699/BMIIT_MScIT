#3.To find the factorial of the given number.
num=int(input('Enter number '))
fact=1
for i in range(1,num+1):
    fact=fact*i
print("Factorial of number ",num," is :",fact)
