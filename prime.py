""" prime number code """

flag=0
num = int (input("Enter the number"))
for i in range(1,num+1):
    if(num%i==0):
        flag=flag+1
print(flag)
if (flag>2):
    print("not prime")
else:
    print("prime")
    
