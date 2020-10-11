class Time:
    hrs=0
    mins=0
    secs=0
    sumh=0
    summ=0
    sums=0
    def __init__(this,h,m,s):
        this.hrs=h
        this.mins=m
        this.secs=s
    def __add__(this,obj):
        sumh=this.hrs+obj.hrs
        summ=this.mins+obj.mins
        sums=this.secs+obj.secs
        while sums>=60 or summ>=60:
            if(sums>=60):
                summ=summ+1
                sums=sums-60
            if(summ>=60):
                sumh=sumh+1
                summ=summ-60
                print(sumh,"hrs,",summ,"mins,",sums,"secs")
t1=Time(int(input("hrs:")),int(input("mins:")),int(input("secs:")))
t2=Time(int(input("hrs:")),int(input("mins:")),int(input("secs:")))
print(t1+t2)
