deler=int(input("Enter the Total dealers  "))
row =2
tire=0
col=2
list1=[]
for i in range(row):
    row1=[]
    for j in range(col):
        x=int(input(f"Enter the car and then bike for  deler {i+1}  "))
        row1.append(x)
    list1.append(row1)
print("Car  Bike")

for i in range(row):
    
    for j in range(col):
        if(j==0):
            tire=tire + (list1[i][j])*4
        else:
            tire=tire+(list1[i][j])*2
        print(list1[i][j],end=" ")
    print()
        
print("Total Tire = ",tire)
