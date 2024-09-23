// #include<iostream>
// #include<algorithm>
#include<numeric>
// using namespace std;
// int main()
// {
//     int arr[5]={22,10,3,55,4};
//     int size=(sizeof(arr)/sizeof(int));
//     sort(arr,arr+size);
//     for (int  i = 0; i <= size; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
    
// }

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[6]={33,2,55,12,45,33};
    // int abc= sizeof(arr);
    int size1= sizeof(arr)/sizeof(int);
    // int size1=(sizeof(arr)/sizeof(arr[0]));
  //  sort(arr,arr+size1);
    // cout<<arr[4]<<endl;
    // cout<<*min_element(arr,arr+size1);
    // reverse(arr,arr+size1);
    // for (int  i = 0; i < size1; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    
    // cout<<*min_element(arr,&arr[4]);
    // cout<<arr[0];
    // int min= *min_element(arr,arr+size1);
    // cout<<"Max : "<<*max_element(arr,arr+size1)<<endl;
    // cout<<"Min : "<<min;
    

    // finding the sum  of the array 

    int  sum=accumulate(arr,arr+size1,0);
    cout<<count(arr,arr+size1,33);
    cout<<endl<<sum<<endl;
    cout<<*find(arr,arr+size1,77);
} 