class employee:
    name="null"
    salary=0
    def inptData(this):
        this.name=input("employee name:")
        this.salary=float(input("enter salary:"))
    def displayData(this):
        print("name=",this.name)
        print("salary=",this.salary)
e1=employee()
e1.inptData()
e1.displayData()
e2=employee()
e2.inptData()
e2.displayData()
e3=employee()
e3.inptData()
e3.displayData()
