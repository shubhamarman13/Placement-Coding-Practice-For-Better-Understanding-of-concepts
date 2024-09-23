var ="aaabbbcccddddeeeefffggggg"
var2=var.split()
list1=[]
list2=[]
for i in var:
    
    x=var.count(i)
    
    list1.append(str(i)+str(x))
    x=0
#print(list1)
for item in list1:
    if item not in list2:
        list2.append(item);

value=""
for item in list2:
    value=value+item
print(value)
