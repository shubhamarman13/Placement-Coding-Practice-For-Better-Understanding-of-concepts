#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={6556,3232,34,544,656,67,3,5,6,78,};
    int len= sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+len);
    cout<<arr[len-2]<<endl;
    cout<<arr[1];
}