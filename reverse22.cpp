#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main()
{
    vector <int> arr={2,5,66,44,33,5,77,3};
    reverse(arr.begin(),arr.end());
    for(int item : arr)
    {
        cout<<item<<" ";
    }
}