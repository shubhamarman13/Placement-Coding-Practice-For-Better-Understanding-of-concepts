def differ(arr):
    even=[]
    odd=[]
    length=len(arr)
    for i in range(0,length):
        i=i+7
        if(i%2==0):
            even.append(arr[i-7])
        else:
            odd.append(arr[i-7])
    even.sort()
    odd.sort()
    print(even[-2]+odd[-2])
            
        
    
length= int(input())
arr=[]
for i in range(0,length):
    value = int (input())
    arr.append(value)
differ(arr)
