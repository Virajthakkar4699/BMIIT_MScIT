class ClgCourse:
    dept=""
    coursenum=0
    ch=0
    tution=0
    def getDetails(this,dept,coursenum,ch,tution):
        this.dept=dept
        this.coursenum=coursenum
        this.ch=ch
        this.tution=tution
    def showDetails(this):
        print("department =",this.dept)
        print("course Number =",this.coursenum)
        print("credit Hours =",this.ch)
        print("tution Fee =",this.tution)     
class LabCourse(ClgCourse):
    labfee=0
    def getDetails(this,dept,coursenum,ch,tution,labfee):
        CollegeCourse.getAllDetails(this,dept,coursenum,ch,tution)
        this.labfee=labfee
    def showDetails(this):
        CollegeCourse.showDetails(this)
        print("lab fee =",this.labfee)
        print("total fee =",this.tution+this.labfee)
obj=LabCourse()
dept=input("department:")
coursenum=int(input("course name:"))
ch=int(input("credit hours:"))
tution=int(input("tution fee:"))
labfee=int(input("lab fee:"))
obj.getDetails(dept,coursenum,ch,tution,labfee)
print()
obj.showDetails()
