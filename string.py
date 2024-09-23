"""name="shubam"
lst=[]
for i in name:
    lst.append(i)
print(lst)

list2=["shubham","Arman","bambam "]
name3=""
for i in list2:
    name3=name3+i+" "
print(name3)

list3=["shubham","Arman","bambam "]
name4=' '.join(list3)
print(name4)
name4=name4.replace("shubham","Ram")
print(name4)


listt=[1,2,3,4]
del listt[1]
listt.pop(2)
print(listt)
"""
"""

abc=[4,5,6,2,4,5]
for index , value in  enumerate(abc):
    print(index,value)


name=["Ram","Sita","hanuman"]
marks=[99,200,400]
for n,m in zip(name , marks):
    print(n,m)
    """

"""
def suqaree(num):
    if(num==0 or num<0):
        return 0
    else:
        
        return num*2

number=[2,3,4,5,6]
ans=[]
for item in number:
    ans.append((suqaree(item)))
print(ans)
"""

name= "shubham singh "
name1=list(name)
for item in name1:
    if(item==" "):
        name1.remove(item)
print(name1)













