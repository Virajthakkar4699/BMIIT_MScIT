numbers = {
    "1": "one",
    "2": "two",
    "3": "three",
    "4": "four",
    "5": "five",
    "6": "six",
    "7": "seven",
    "8": "eight",
    "9": "nine",
    "0": "zero"
}

inpt = int(input("Please enter the number : " ))

while inpt > 0:
    rem = inpt%10
    str_rem = str(rem)
    inpt = inpt//10
    print(numbers[str_rem])


#method-2

ind = ''
inpt2 = input("Please enter the number : " )
for ch in inpt2:
    print(numbers[ch])
    ind += (numbers[ch]) + " "

print(ind)
input(">")
