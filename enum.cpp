#include <iostream>
using namespace std;

int main()
{
    enum light{red=1,yelow=2,green=3};
    light color= red;
    cout<<color;
    if (color==1)
    {
        /* code */cout<<"stop";
    }
    
}