#include <iostream>
#include <vector> // Include the vector library
#include<algorithm>
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> arr={2,3,5,3,2,5,6,7,5,4,5};
    sort(arr.begin(),arr.end());
    auto new_last=unique(arr.begin(),arr.end());
    int last= new_last-arr.begin();
    for(int i=0; i<last;i++)
    {
        cout<<arr[i]<<" ";
    }
}