#include<iostream>
using namespace std;
class ABC
{
    private :
    int x;
    public:
    ABC(int value)
    {
        x=value;
    }
    ABC (const ABC &obj)
    {
        cout<<endl<<"value taken int he copy constructor"<<endl;
        x=obj.x+10;
        
    }
    void display()
    {
        cout<<x;
    }

};
int main()
{
    ABC obj(10);
    obj.display();

    // obj.display();
    ABC obj2= obj;
    obj2.display();

}