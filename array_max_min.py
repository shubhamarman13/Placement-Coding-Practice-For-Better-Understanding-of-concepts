
def maximun(list1):
    return max(list1)
def minimum(list1):
    return min(list1)

length=int(input("Enter the length of the list "))
list1=[]
for i in range(length):
           x=int(input("Enter the element: "))
           list1.append(x)
print("Max is:  ",maximum(list1))
print("Min is:  ",minimum(list1))
