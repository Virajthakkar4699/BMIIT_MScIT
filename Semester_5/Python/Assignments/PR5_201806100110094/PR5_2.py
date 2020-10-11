#Write a Python program to find the repeated items of a tuple.

t1=(7,4,5,6,2,1,3,4,5)
for i in t1:
    if t1.count(i) > 1:
        print(i)
