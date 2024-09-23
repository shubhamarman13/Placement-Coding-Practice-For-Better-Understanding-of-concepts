#include <iostream>
using namespace std;
int main()
{
    int i=11;
    cout<<endl<<" do while loop "<<endl;
    do
    {
        cout<<i<<" ";
        i=i+1;
    }while(i<10);

    cout<<endl<<" while loop "<<endl;
    int x=1;
    while(x<=10)
    {
        cout<<x<<" ";
        x=x+1;
    }
}

