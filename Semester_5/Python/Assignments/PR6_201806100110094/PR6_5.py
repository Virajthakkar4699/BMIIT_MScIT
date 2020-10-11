set1={10,20,30,25,40}
set2={10,25,35}

if set1.isdisjoint(set2):
    Print("Two sets have no items in common");
else:
    print("Two sets have items in common");
    print(set1.intersection(set2));
