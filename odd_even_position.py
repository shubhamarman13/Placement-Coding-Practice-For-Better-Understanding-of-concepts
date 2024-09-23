x= int(input())
list1=[]
odd=[]
even=[]
for i in range(0,x):
    value=int(input())
    list1.append(value)
length = len(list1)
for i in range(0,length):
    if((i+7)%2==0):
        even.append(list1[i])
    else:
        odd.append(list1[i])
even.sort()
odd.sort()
print(even[-2]+odd[-2])

    
    
