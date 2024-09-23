row = int (input("Enter the row "))
col= int (input("Enter the col"))

arr=[]
for i in range(row):
    row1=[]
    for j in range(col):
        value=int(input("Enter the value " ))
        row1.append(value)
    arr.append(row1)
print(arr)
## display
for i in range(row):
    for j in range(col):
        print(arr[i][j],end=" ")
    print()
