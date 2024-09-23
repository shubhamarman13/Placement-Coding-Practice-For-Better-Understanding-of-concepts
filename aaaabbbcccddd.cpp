#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string var = "aaabbbcccddddeeeefffggggg";
    vector<string> arr;
    vector <string> value;
    for (char item : var)
    {
        int x = count(var.begin(), var.end(), item);
        arr.push_back(item + to_string(x));
        
    }
   
    cout << endl;
    sort(arr.begin(), arr.end());
    auto last = unique(arr.begin(), arr.end());
    int final_last = last - arr.begin();
    int size=var.size();
    for(string item : arr)
    {
        // cout<<item<<" ";
        value.push_back(item);
    }
   sort(value.begin(),value.end()); 
   auto last1 = unique(value.begin(),value.end());
//    value.erase(last,value.end());
    int dist= distance(arr.begin(),last1);
   for(int i=0;i<dist;i++)
   {
    cout<<value[i];
   }
//    for(string item: value)
//    {
//     cout<<item;
//    }
//    for(string item : value)
//    {
//     cout<<item <<endl;

//    }
}

