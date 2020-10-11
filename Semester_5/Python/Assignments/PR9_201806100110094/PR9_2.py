import array as arr 

x = arr.array('i',[10,20,30,40,50])
y = []
z = len(x) - 1
for i in range(len(x)):
    y.append(x[z])
    z -= 1
print(y)
