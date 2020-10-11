#10. To find all such numbers which are divisible by 7 but are not a multiple of 5, between 1 and 100 (both included)

for i in range(1,101):
    if(i%7==0 and i%5!=0):
        print(i)
        
