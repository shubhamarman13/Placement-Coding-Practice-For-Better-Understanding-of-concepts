#include<iostream>
using namespace std;
class Name
{
    private:
    string name= "jai shree ram";
    public:
    friend void display_name(Name obj);
};
void display_name(Name obj)
{
    cout<<obj.name;
}
int main()
{
    Name obj;
    display_name(obj);
}