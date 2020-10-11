import array as arr
v = arr.array('f', [0] * 10)
print(v)
for i in range(10):
    v[i] = float(input("input: "))
print(v)
