#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int count=0;
    int count1=0;

    vector <string> match;
    int num;
    cin>>num;
    cin.ignore();
    for(int i=0; i<num;i++)
    {
    
        string value;
        getline(cin,value);
        
        match.push_back(value);
    }
    for(string item: match)
    {
        if(item=="Team A")
        {
            count++;
        }
        
        else
        {
            count1++;
        }
    }
    if(count>count1)
    {
        cout<<" WIN Team A";
    }
    else if(count==count1)
        {
            cout<< "Draw ";
            return 0;
        }
    else
    {
        cout<<"WIN Team B";
    }

}