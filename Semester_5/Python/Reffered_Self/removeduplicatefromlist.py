numbers = [3,2,5,10,5,8,7,8,9,9,10,12]

for number in numbers:
    occurence = numbers.count(number)
    if occurence > 1:
        numbers.remove(number)

print(numbers)

#method-2

unique=[]
for number in numbers:
    if number not in unique:
        unique.append(number)

print(unique)

