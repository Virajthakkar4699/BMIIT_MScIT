'''
3.Write a program that takes a list of numbers
(for example, a = [5, 10, 15, 20, 25]) and makes a
new list of only the first and last elements of the
given list. For practice, write this code inside a function.
'''
def first_last(a):
    f=a[0]
    l=a[-1]
    return(f,l)

a = [5, 10, 15, 20, 25]
print("List elements ",a)
print("First and Last elements ",first_last(a))

