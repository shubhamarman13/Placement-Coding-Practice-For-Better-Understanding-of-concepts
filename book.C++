#include <iostream>
using namespace std;
struct book
{
    string Name;
    string Author;
    float Price;
};
int main()
{
    int size;
    cout << "Enter hown many book details you want to enter " << endl;
    cin >> size;
    book obj[size];
    
    for (int i = 0; i < size; i++)
    
    {
        cin.ignore();   
        cout<<"Enter the Name : ";
        getline( cin,obj[i].Name);
        cout<<"Enter Author : ";
        getline(cin,obj[i].Author);
        cout<<"Enter Price : ";
        cin>>obj[i].Price;

    }

    cout<<endl<<"Displaying Book Record "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"Name : "<<obj[i].Name<<endl;
        
        cout<<"Author : "<<obj[1].Author<<endl;
       
        cout<<"Price : "<<obj[i].Price<<endl<<"****************************"<<endl;
        

    }
    
}