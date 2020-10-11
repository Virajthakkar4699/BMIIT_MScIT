dict1={'A':1,'B':2,'C':3,'D':4}
key=input("Enter Key to check :");

if key in dict1.keys():
    print("Key is present and value of key is ",+dict1[key]);
else:
    print("Key is not present");
    dict1['P']=10
    print(dict1);
