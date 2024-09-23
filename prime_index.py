""" find the  sum of prime index of an array """
sum1=0



list1=[1,2,3,4,5,6,7,8,9]
print(list1)
length= len(list1)# 9
for i in range(2,length):
    count=0
    for j in range(1,i+1):
        if(i%j==0):
            count=count+1
    if(count<=2):
        sum1=sum1+list1[i]
        print(list1[i])
    
            
print(sum1)
            
            
            
            
            
            
    
