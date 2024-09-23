#include<iostream>
#include<algorithm>
using namespace std;
 int  remove_missing(int arr[],int size)
 {
   
    sort(arr,arr+size);
    auto last_index= unique(arr,arr+size);
    int last=last_index- arr;
    for (int  i = 0; i < last; i++)
    {
             cout<<arr[i]<<" ";
    }
 }
int main()
{
    int arr[9]={22,3,55,4,67,22,3,55,62};
    int size=sizeof(arr)/sizeof(arr[0]);
     int last = remove_missing(arr, size);

    // reverse(arr,arr+size);
    // sort(arr,arr+size);
    // auto last = unique(arr,arr+size);
    // int last1=last-arr;
    // for(int i=0;i<last;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
}