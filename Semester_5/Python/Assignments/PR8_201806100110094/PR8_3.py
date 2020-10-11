def largest_num():
    y = 0
    for i in range(10):
        x = int(input("Enter a number: "))
        if (x%2 == 1 and x > y):
            y = x

    if (y == 0):
        print("No larger number is found.")
    else:
        print(y, "is the largest odd number")
largest_num()
