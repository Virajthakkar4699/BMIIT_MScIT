
'''
Suppose the following input is supplied to the program: 5
Then, the output should be:
{1: 1, 2: 8, 3: 27, 4: 64, 5: 125}
'''

num=int(input("Enter the key :"))
numbers = {}

for i in range(1, num+1):
	numbers[i] = i ** 3
print(numbers)


