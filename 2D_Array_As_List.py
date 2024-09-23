row =2
col=3
list1=[]
for i in range(row):
    row1=[]
    for j in range(col):
        x=int(input("Enter the value "))
        row1.append(x)
    list1.append(row1)
    
for i in range(row):
    for j in range(col):
        print(list1[i][j],end="")
    print()
        
    
