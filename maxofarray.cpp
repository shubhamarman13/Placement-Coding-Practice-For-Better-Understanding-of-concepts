#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//  auto maxi(vector <int > arr,int length)
// {
//     return *x;
// }
int main()
{
     
    vector <int> arr={1,40,5,62,13,18,1,40,12,13,5,62};
    sort(arr.begin(),arr.end());
    auto new_len= unique(arr.begin(),arr.end());
    arr.erase(new_len,arr.end());
    for(int c:arr)
    {
        cout<<c<<" ";
    }
    
    // auto x=max_element(arr.begin(),arr.end());
    // int max=0;
    // cout<<*x;
    //  copying of a vector  into another vector
    // sort(arr.begin(),arr.end());
    // vector <int> arr2=(arr);
    // auto new_end= unique(arr.begin(),arr.end());
    // for(int item : arr )
    // {
    //     cout<<item<<" ";
    // }
    // arr.erase(new_end,arr.end());
    
    // for(int item : arr2)
    // {
    //     cout<<item<<" ";
    // }

}

