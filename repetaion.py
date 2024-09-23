x= input()
list1= list(x)
list2=[]
counting=[]
list1.sort()
for items in list1:
    #print(items)
    if(items not in  list2):
        list2.append(items)
for item in list2:
    counting.append(list1.count(item))
print(max(counting))
    
    
