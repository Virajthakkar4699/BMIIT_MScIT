print("Select the option")
print("==================")
print("a.Title case")
print("b.Lower case")
print("c.Upper case")
print("d.Toogle case")
print("===================")
string = input("Enter string:")
choice = input("Enter choice:")
if (choice == "a" ):
    print("title case is:",string.title())
 
elif(choice == "b" ):
    print("lower case is:",string.lower())
   
elif( choice == "c" ):
    print("upper case is:",string.upper())
   
elif( choice == "d" ):
    print("toogle case is:",string.swapcase())
   
else:
    quit

