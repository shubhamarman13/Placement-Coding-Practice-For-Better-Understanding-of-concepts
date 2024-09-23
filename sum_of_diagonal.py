""" sum of the diagonal """
sum1 =0
sum2=0
row= int (input("Enter the row "))
col= int (input("Enetr col "))
list1=[]
for i in range(0,row):
    list2=[]
    for j in range(0,col):
        value= int (input("Enter the value"))
        
        list2.append(value)
        if(i==j):
            sum1=sum1+value
        if((i+j)==(col-1)):
            sum2=sum2+value
    list1.append(list2)
print(list1)
print("Diagonal= ",sum1)
print("Diagonal= ",sum2)

        
