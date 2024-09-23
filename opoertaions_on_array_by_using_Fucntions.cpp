#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void  remove_duplicate(vector <int> &arr)
{
    sort(arr.begin(),arr.end());

        // vector<int> :: iterator index= unique(arr.begin(),arr.end());
        auto new_last= unique(arr.begin(),arr.end());
        int last= distance(arr.begin(),new_last);
        // arr.erase(new_last,arr.end());

        for (int  i = 0; i < last; i++) 
        {
            cout<<arr[i]<<endl;
        }
        

}
void inisilaize(vector <int> &arr)
{
    arr.push_back(101);
    arr.push_back(10);
    arr.push_back(3);
    arr.push_back(100);
    arr.push_back(101);
    arr.push_back(11);
    arr.push_back(14);
    arr.push_back(6);
    arr.push_back(11);
    arr.push_back(3);
    arr.push_back(100);
}
void display(vector <int> &arr, int length)
{
    for (int  i = 0; i < length; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
 void sortArray(vector  <int> &arr, int lenght)
 {
    sort(arr.begin(), arr.end());
 }
int main()
{
 vector<int> arr;

    //  cout<<arr.front();
    //  bool value= arr.empty();
    //  cout<<value;
    //  arr.resize(10,0);
    //  fill(arr.begin(), arr.end(),0);

//  cout<<x;
//  vector <int> arr2=move(arr);
//  arr2=arr;

inisilaize(arr);
int length= arr.size();
// cout<<arr[0];
remove_duplicate(arr);
// sortArray(arr,length);
// display(arr,length);
// // cout<<length;
// for(int i =0; i<length;i++)
// {
//     cout<<arr[i]<<endl;
// }
}