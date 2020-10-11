class Company:
    cname="null"
    oname="null"
    def __init__(this,cname,oname):
        this.cname=cname
        this.oname=oname
    def __eq__(this,obj):
        if(this.cname==obj.cname):
            print("Company Are Same")
        else:
            print("Company Are Different")
            
print("Details For Company 1")
c1=Company(input("Company Name:"),input("owner name:"))
print("\n Details For Company 2")
c2=Company(input(" Company Name:"),input("owner name:"))
c1==c2
