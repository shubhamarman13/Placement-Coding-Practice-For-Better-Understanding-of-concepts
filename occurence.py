value= int (input("How many numebrs  do you want to add"))
list1=[]
for i in range(0,value+1):
    x=int(input("Enter the num"))
    list1.append(x)

    
for item in list1:
    
    x=list1.count(item)
    print(item," is occuring ",x, " Times")


          
          
          
          
          
