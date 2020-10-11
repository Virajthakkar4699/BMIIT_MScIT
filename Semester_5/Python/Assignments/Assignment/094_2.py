l=[] 
f=[]
for i in range(15):
    l.append(int(input("enter marks of student :")))
    
summary={'min':min(l),"max":max(l),"ave":sum(l)/100*15,"failstudentnumber":len(list(filter(lambda x: x<42,l))),"faillist":filter(lambda x: x<42,l),}

print("minimum ",summary.get("min"))
print("maximum ",summary.get("max"))
print("average ",summary.get("ave"))
print("total number of student who failled",summary.get("failstudentnumber"))
print("list of student who failed",list((summary.get("faillist"))))
print("append marks:")


l.append(int(input("enter marks")))
l.append(int(input("enter a marks")))
