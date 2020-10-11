class Person:
    name=""
    gender=""
    age=0
    def getDetail(this,name,gender,age):
        this.name=name
        this.gender=gender
        this.age=age        
    def showDetail(this):
        print("employee name =",this.name)
        print("gender =",this.gender)
        print("age =",this.age)
class Employee(Person):
    company=""
    salary=0
    def getEmpDetail(this,company,salary):
        this.company=company
        this.salary=salary        
    def showEmpDetail(this):
        print("company =",this.company)
        print("salary =",this.salary)
class Typist(Employee):
    speed=0
    def getData(this,speed):
        this.speed=speed        
    def display(this):
        print("typing speed =",this.speed)
name=input("employee name:")
gender=input("gender:")
age=int(input("age:"))
company=input("company:")
speed=int(input("speed:"))
salary=float(input("salary:"))

obj=Typist()
obj.getDetail(name,gender,age)
obj.getEmpDetail(company,salary)
obj.getData(speed)
print()
obj.showPersonDetail()
obj.showEmpDetail()
obj.display()
