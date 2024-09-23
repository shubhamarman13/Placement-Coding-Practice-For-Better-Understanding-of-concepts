#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
    
    int  arr[]={12,3,66,12,44,122,23,122};
    int len= sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+len);
    auto new_length= unique(arr,arr+len);
    int last= new_length-arr;
    for(int i=0;i<last;i++)
    {
        cout<<arr[i]<<" ";
    }
  
  
    // for(int item : arr)
    // {
    //     cout<<item<<" ";
    // }
}

