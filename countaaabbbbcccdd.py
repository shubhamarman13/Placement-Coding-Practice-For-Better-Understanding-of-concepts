value="aaccbbbddd"
newvalue=[]

lst=list(value)
for item in value:
    if item not in newvalue:
        newvalue.append(item)
newvalue.sort()
for item in newvalue:
    cut=lst.count(item)
    print(f"{item}{cut}{" "}",end="")
    
