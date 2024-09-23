#include<iostream>
using namespace std;
struct node
{
    string name; 
    struct  node * next;
};
struct node Display(node *first)
{
    if(first==NULL)
    {
        cout<<"The linked list is Empty"<<endl;
    }
    while (first!=NULL)
    {
        cout<<first->name;
        first=first->next;

    }
}
int main()
{
struct node *first= new node;
struct node *second= new node;
first->name="Tere Naam ";
first->next=second;
second->name="Har Har mahavdev ";
second->next=NULL;

// cout<<first->name<<endl;
// cout<<second->name;;

while (true)
{
    int choice ;
    cout<<"1 insert Node "<<endl;
    cout<<"2 show Linkedlist "<<endl;
    cout<<"3 Delete Node "<<endl;
    cout<<"4 Exit "<<endl;
    cout<<"Enter the choice ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        insert_ndoe()
        case 2:
        Display(first);
        case 2:
        exit(0);
    }
    
}

}