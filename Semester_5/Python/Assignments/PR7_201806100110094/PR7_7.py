dict1={'A':10,'C':40,'D':20,'B':30}

[print(key,value) for (key,value) in sorted(dict1.items(),key=lambda x:x[1])]
