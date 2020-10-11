'''
4.Declare a list and perform the following operations
Print the elements of the list
Print only even numbers from the list.
Remove all occurrences a given element from the list.
Remove duplicate elements from the list.
Add an element at specified index in a list.
To sort the elements of given list in Ascending and
Descending Order.
'''
l=[20,24,4,5,67,89,31,1,3,4,1]

while(True):
    print()
    print("==========List Operations==============")
    print("1. Print the elements of the list ")
    print("2. Print only even numbers from the list")
    print("3. Remove all occurrences a given element ")
    print("4. Remove duplicate elements")
    print("5. Add an element")
    print("6. sort the elements in Ascending order ")
    print("7. sort the elements in Descending order ")
    print("8. Exit")
    ch=int(input("Your Choice : "))
    print("============================================")

    if(ch==8):
        break

    if(ch==1):
        print("List Elements :",l)
    elif(ch==2):
        print("Even Elements of list ")
        for i in l:
            if(i%2==0):
                print(i,end=" ")
    elif(ch==3):
        num=int(input("Enter element to remove occurence :"))
        j=0
        for i in l:
            if(i==num):
                j=1

        if(j!=1):
            print("Entered number is not in the list")
        else:
            l.remove(num)
            print("List after removing occurence of ",num)
            print(l)
    elif(ch==4):
        print("List after removing duplicate elements : ")
        print(set(l))
    elif(ch==5):
         num=int(input("Enter element to add into list :"))
         l.append(num)
         print("List after adding ",num)
         print(l)
    elif(ch==6):
        print("List after sorting in ascending order")
        l.sort()
        print(l)
    elif(ch==7):
        print("List after sorting in descending order")
        l.sort(reverse=True)
        print(l)
    else:
        print("Invalid Choice!")
