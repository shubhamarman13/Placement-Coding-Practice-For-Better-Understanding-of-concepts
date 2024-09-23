#include <iostream>
#include <algorithm>  // For std::find

using namespace std;
//    the index of the arr by using the find method 
int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Array of numbers
    int size1 = sizeof(arr) / sizeof(arr[0]); // Number of elements in the array
    int  *it = find(arr,arr+size1,50);
    cout<<it-arr;   // now it will return the index numebr

    int  value= binary_search(arr,arr+size1,20);
    if(value!=1)
    {
        cout<<"Not found in the array ";
    }
    else{
        cout<<"yes find in the array"<<endl;
    }
    return 0;
}
