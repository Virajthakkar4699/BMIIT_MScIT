'''
5.Write a program to find the elements which are not exist in list2 &
the elements which are not exists in list1.
'''

l1=[2,3,4,8,90,10,2,3]
l2=[1,22,34,55,70,3,2,60]

print("List 1 : ",l1)
print("List 2 : ",l2)

print("Elements exists in List1 but not in List2",(set(l1).difference(l2)))
