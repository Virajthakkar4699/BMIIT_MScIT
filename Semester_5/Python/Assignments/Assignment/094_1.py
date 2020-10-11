class salesman:
    

        def __init__(self,salesmannum,salesmanname,salesamt,salesmantype):
            self.name=name=salesmanname
            self.number=salesmannum
            self.amt=salesamt
            self.type=salesmantype
        
        def CalcComm(self):
            if self.type=='d':
                self.c=5
            elif self.type=='p':
                self.c=9
            elif self.type=='w':
                self.c=2
            else:
                self.c=100
            
            self.netamt=self.amt*(self.c/100)
            self.netamt+=self.amt
        
        def displayData(self):
                    
                self.CalcComm();
                print(f"salesman name : {self.name}", f"salesman id: {self.number}",f"salesman amt: {self.amt}", f"salesman type: {self.type}",f"Net amt {self.netamt}", sep='\n')
        
            
while(True):
        choice=int(input("1: to enter data , 2:to display data"))
        print()
	if choice==1:
        name=input("enter your name : ")
        id=input("enter your Id number : ")
        amt=int(input("enter the amt : "))
        type=input("enter the type (p/d/w) :")
        s= salesman(id,name,amt,type)
    if choice==2:
        try:
            s.displayData()
        except Exception :
            print("first enter data")



