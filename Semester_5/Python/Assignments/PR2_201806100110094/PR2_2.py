#2.To find whether the given year is a leap year or not
year=int(input('Enter year '))
if(year%4==0 and year%100!=0 or year%400==0):
    print('Leap Year')
else:
    print('Not Leap Year')
