""" we have to take the input form the user as sem =3 and  totla
subject can be  decided by the user and we have  to return the maximum of
all the three semester seperatly  """

def semester(sem,sub):
    
    for i in range(0,sem):
        newList=[]
        print("Enter the marks of sem ",i+1)
        for j in range(0,sub):
            value=int(input())
            if((value>100) or (value<0)):
                print("you have entered the wrong input ")
                break
            newList.append(value)
        list1.append(newList)
            
sem=int(input("Enter the total sems: " ))
sub=int(input("Enter the total subj: " ))            
list1=[]
semester(sem,sub)
print(list1)
sem1,sem2,sem3=list1
print("Max of sem1: ",max(sem1))
print("Max of sem2: ",max(sem2))
print("Max of sem3: ",max(sem3))
