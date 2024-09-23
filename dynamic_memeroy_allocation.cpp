#include<iostream>
using namespace std;
int main()
{
    int *ptr= new int;
    *ptr=44;
    int *ptr1= new int;
    *ptr1=442;
    cout<<*ptr;
    cout<<endl<<int(&ptr);
    cout<<endl<<int(&ptr1)<<endl;
    delete ptr;
    delete ptr1;
    cout<<*ptr;
}