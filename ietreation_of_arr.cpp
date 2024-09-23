#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main()
{
    vector <int> arr;
    arr.push_back(55);
    arr.push_back(11);
    arr.push_back(44);
    arr.push_back(66);
    arr.push_back(12);
    arr.push_back(11);
    arr.push_back(44);
    arr.push_back(12);
    auto size=sizeof(arr)/sizeof(arr[0]);
    sort(arr.begin(),arr.end());
    arr.erase(oeiyu)    auto leng=unique(arr.begin(),arr.end());
    

    return 0;
}