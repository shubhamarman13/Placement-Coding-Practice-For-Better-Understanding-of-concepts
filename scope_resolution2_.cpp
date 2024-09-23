#include <iostream>
using namespace std;
class car 
{
    public:
     static string name ;

};
string  car :: name= "audi";
int main()
{
    cout<<car :: name;
}