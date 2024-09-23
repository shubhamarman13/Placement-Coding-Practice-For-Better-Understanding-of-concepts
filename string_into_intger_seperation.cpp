#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string num="2,3,44,33,11,23,4,5,7,6";
    vector <int> number;
    string temp= "";
    for(char i :num)
    {
        if(i==',')
        {
            number.push_back(stoi(temp));
            temp="";
        }
        else
        {
            temp=temp+i;
        }

    } // end of for loop 

    number.push_back(stoi(temp));
    /// now will sort the vector 
    int size = sizeof(number)/sizeof(number[0]);
    sort(number.begin(),number.end());
    for(int i : number)
    {
        cout<<i<<" ";
    }

}