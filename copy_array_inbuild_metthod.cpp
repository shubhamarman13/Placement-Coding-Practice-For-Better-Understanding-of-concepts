#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int arr[]= {1,2,3,44,5,3,5,2,1,7,7,8,9,};
 int size1= sizeof(arr)/sizeof(arr[0]);
 sort(arr,arr+size1);
 int *new_index= unique(arr,arr+size1);
 int last = new_index- arr;
 int arr2[last];
 copy(arr,arr+last,arr2);
 for (int i = 0; i < last; i++)
 {
    cout<<arr2[i]<<" "; 
 }
 

}