def divi_n( n,m):
    divi=0
    not_divi=0
    for i in range(1,m+1):
        
        if(i%n==0):
            divi=divi+i
        else:
            not_divi=not_divi+i
        

    print(not_divi-divi)
    
     

n= int (input())
m=int (input())
divi_n(n,m)

