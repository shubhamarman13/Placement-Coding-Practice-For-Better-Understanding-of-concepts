#include<iostream>
using namespace std;
int main()
{
    int *ptr= new int;
    *ptr=44;
    cout<<*ptr;
    cout<<endl<<int(&ptr);
}