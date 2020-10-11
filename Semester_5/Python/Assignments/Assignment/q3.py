l=[int (i) for i in input("enter num ").split(',')]
c=0
s=list(filter(lambda x:x<1 or x>15,l))
if len(s)>0:
    print("enter number between 1 to 15")
    c=1
elif len(l)!=14:
    print("enter 15 keys")
    c=1
if c==0:
    d={i:i for i in l}
    print("keys :",d.keys())
    print("values: ",d.values())
    d[input("enter key")]=int(input("enter value"))
    d2=dict(d);
    print("d is copied to d2",d2)
    

