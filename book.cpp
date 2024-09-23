#include<iostream>
#include<string>
using namespace std;

void Insert_Book(string book_name[], int size)
{
    cout<<"Enter the Book Names "<<endl;
    cin.ignore();
    for(int i =0;i<size;i++)
    {
        cout<<"Enter Book 1 : ";
        getline(cin,book_name[i]);
    }

}
void insert_Author(string book_Author[],int size)
{
    cout<<"Enter the Authors"<<endl;
     cin.ignore();
    for(int i =0;i<size;i++)
    {
        cout<<"Enter author "<< i+1 ;
        getline(cin,book_Author[i]);
    }
}
void insert_Price(float book_price[],int size)
{
    cout<<"Enter the prices "<<endl;
    cin.ignore();
    for(int i=0;i<size;i++)
    {
        cin>>book_price[i];
    }
}
int main()
{
    int size;
    cout<<"Enter the size ";
    cin>>size;
    string book_name[size];
    string book_Author[size];
    float book_price[size];

    while (true)
    {
        int choice ;

        cout<<"1 Insert Book Name "<<endl;
        cout<<"2 Insert Book Author "<<endl;
        cout<<"3 Insert Book Price "<<endl;
        cout<<"4 Exit "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            Insert_Book(book_name,size);
            break;
            case 2:
            insert_Author(book_Author,size);
            break;
            case 3:
            insert_Price(book_price,size);
            break;


        }
    }
    

}