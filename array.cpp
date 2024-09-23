#include <iostream>
using namespace std;
int size = 5, index, value;
int insert(int Arr[5])
{
    for (int i = 0; i < size - 1; i++)
    {
        cout << "Enetr the element " << endl;
        cin >> Arr[i];
    }
}
int show(int Arr[5])
{
    for (int i = 0; i < size - 1; i++)
    {
        cout << Arr[i] << endl;
    }
}
int update(int Arr[5])
{
    cout << "Enter the index number ";
    cin >> index;
    Arr[index] = value;
}
int search(int Arr[5])
{
    int ind;
    cout << "Enter the index number ";
    cin >> ind;
    cout << Arr[ind];
}

int main()
{
    int size;
    // cout<<"Enter the size of the array ";
    // cin>>size;
    int Arr[size];
    int choice;
    while (choice != 7)
    {
        cout << "1  Add elemnet " << endl;
        cout << "2  view elemnet " << endl;
        cout << "3  update elemnet " << endl;
        cout << "4  Search Rrcord " << endl;
        cout << "5  Define Statics " << endl;
        cout << "6  Define Statics " << endl;
        cout << "7  Define Statics " << endl;

        cout << "Ente the choice " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            insert(Arr);
            break;
        case 2:
            show(Arr);
        case 3:
            update(Arr);
        case 4:
            search(Arr);
        case 7:
            exit;
        default:
            break;
        }
    }
    return 0;
}