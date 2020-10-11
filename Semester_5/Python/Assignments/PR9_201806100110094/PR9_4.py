import array as arr
v = arr.array('i',[10,20,30,40,50])
print(v)

v.insert(3,60)
v.insert(6,70)
print("adding two elements :",v)
v.append(80)
print("adding one element at end: ",v)
print("5th element:",v[4])
print("Length:", len(v))
for i in v:
    print(i, end=" ")

