class FLOAT:
    va=0
    def __init__(this,f=0):
        this.va=f
    def getdata(this,value):
        this.va=f
    def display(this):
        print(this.va)
    def __iadd__(this,add):
        return this.va+add.this.add.va
    def __isub__(this,sub):
        return this.va-sub.va
f1=FLOAT()
f=float(input("Value 1:"))
f1.getdata(f)
f1.display()
f3=FLOAT()
f=float(input("Value 2:"))
f3.getdata(f)
f3.display()
f2=FLOAT()
f=float(input("enter value For addition & subtract:"))
f2.getdata(1)
f1 += f2
print(f1)
f3 -= f2
print(f3)
