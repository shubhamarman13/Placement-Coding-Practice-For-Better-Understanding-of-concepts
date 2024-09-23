""" three semester marks and their  highest marks """
list1=[]

for i in range(0,3):
    list2=[]
    print("Enter the marks of sem ",i+1)
    for j in  range(0,3):
        value=int(input())
        list2.append(value)
    list1.append(list2)
sem1,sem2,sem3=list1
print(sem1)
print(sem2)    
print(sem3)

print("Max  of sem1 is: ",max(sem1))
print("Max  of sem2 is: ",max(sem2))    
print("Max  of sem3 is: ",max(sem3))

