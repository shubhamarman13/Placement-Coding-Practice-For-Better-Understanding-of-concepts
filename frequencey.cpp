#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int value=121112222;
    
    while(value>0)
    {
        int temp = value%10;
        if(temp==1)
        {
            count=count+1;
        }
        value=value/10;
    }
    cout<<count;
}