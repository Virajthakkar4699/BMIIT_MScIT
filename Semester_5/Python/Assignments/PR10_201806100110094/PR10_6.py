class shapes:
    r=0
    a=0
    h=0
    b=0
    l=0
    w=0
    areacircle=0
    arearectangle=0
    areasquare=0
    areatriangle=0
    def __init__(this,r=2.3,a=3,h=2,b=3,l=5,w=2):
        this.r=r
        this.a=a
        this.h=h
        this.b=b
        this.l=l
        this.w=w
    def areaOfCircle(this):
        this.areacircle=3.14*(this.r*this.r)
        print("Area of circle =",this.areacircle)
    def areaOfSquare(this):
        this.areasquare=this.a*this.a
        print("Area of square =",this.areasquare)
    def areaOfRectangle(this):
        this.arearectangle=this.w*this.l
        print("Area of rectangle =",this.arearectangle)
    def areaOfTriangle(this):
        this.areatriangle=(this.h*this.b)/2
        print("Area of triangle =",this.areatriangle)
obj=shapes()
obj.areaOfCircle()
obj.areaOfSquare()
obj.areaOfRectangle()
obj.areaOfTriangle()
