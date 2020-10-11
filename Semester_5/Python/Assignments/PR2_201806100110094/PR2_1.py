#To input marks of 5 subjects and generate student mark sheet,proper validation is required.
s1=float(input("Enter First Subject Marks : "))
while(s1<0):
    s1=float(input("Re-Enter First Subject Marks : "))

s2=float(input("Enter Second Subject Marks : "))
while(s2<0):
    s2=float(input("Re-Enter Second Subject Marks : "))

s3=float(input("Enter Third Subject Marks : "))
while(s3<0):
    s3=float(input("Re-Enter Third Subject Marks : "))

s4=float(input("Enter Fourth Subject Marks : "))
while(s4<0):
    s4=float(input("Re-Enter Fourth Subject Marks : "))

s5=float(input("Enter Fifth Subject Marks : "))
while(s5<0):
    s5=float(input("Re-Enter Fifth Subject Marks : "))

per=(s1+s2+s3+s4+s5)*100/500
if(per>=90):
    print("Grade: A")
elif(per>=80 and per<90):
    print("Grade: B")
elif(per>=70 and per<80):
    print("Grade: C")
elif(per>=60 and per<70):
    print("Grade: D")
else:
    print("Grade: F")