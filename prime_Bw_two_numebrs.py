
x=int (input("Enter the value"))

def prime(num):
    for i in range(2,num):
        if(x%i==0):
            print("Not prime")
            break
    else:
        print("prime")

    
prime(x)
        
