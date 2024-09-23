"""list1=[22,656,77,53,21,1,3,4,8,42,24,6,9]
list1.sort()
print(list1)
print(list1[-2])
"""
color=[]
L=input()
T=input()
list1=[]
for item in L:
    color.append(item)
for item in T :
    list1.append(item)


length= len(list1)
i=0
j=0
for item in range(0,length):
    if(list1[i]==color[j]):
        i=i+1
        j=j+1
    else:
        i=i+1

print(j+1)

        
    
