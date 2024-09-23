value= int (input("Enter the number "))
var= ((value//2)+1)
for i in range(1,value+1):
    for j in range(1,value+1):
        if(i==var or j==var):
            print("*",end="")
        else:
            
            print("0",end="")
    print()


