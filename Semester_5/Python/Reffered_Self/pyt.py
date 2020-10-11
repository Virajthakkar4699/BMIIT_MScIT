import math

#print(math.round(2.5))

price = 10000
goodcredit = input('Person has a good credit or not ?')

print(f'input = {goodcredit}')

if goodcredit.lower()=="yes":
    is_goodcredit=True
elif goodcredit.lower()=="no":
    is_goodcredit=False
else:
    print("Wrong Input")

print(f'Person has goodcredit = {is_goodcredit}')

if is_goodcredit:
    downprice = price-((price*10)/100)
else:
    downprice = price-((price*20)/100)

print(f'Downpayement is {downprice} rupees')
