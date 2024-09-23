""" in this code we are going thorugh all the important function of list as
Array that can be very important in the progeamming """

list2=list([20,13,4,16,8])

print(list2)

# findining the sum of list

total2 = sum(list2)
print("Sum of list2: ",total2)

##  sorting the array or the list

sorted_list=sorted(list2)

print(sorted_list)   

## finding the maximun elemnt from a list
maximum = max(list2)
print("Maximul element is : ",maximum)

##finding the third maximum
length=len(sorted_list)
print("Third Maximum element is : ",sorted_list[length-3])


## finding the minimum element of the array or the list
minimum= min(list2)
print("Minimum  is: ",minimum)

##find the second minimum
second_smallest = sorted_list[1]
print("Secodn smallest ",second_smallest)

new_list=[66,22,1,2,3,99,55,34,56]
print(new_list[::-1])

if 200 in new_list:
    
    print("true")
else:
    print("False")















