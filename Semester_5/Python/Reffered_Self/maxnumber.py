numbers=[1,5,20,100,30,50,80,6,10]
max=numbers[0]
i=0

for x in numbers:
    if max<numbers[i]:
        max=numbers[i]
    else:
        i=i+1

print(f'Max number from list is {max}')

#method-2

max=numbers[0]
for x in numbers:
    if x > max:
        max=x
print(max)
