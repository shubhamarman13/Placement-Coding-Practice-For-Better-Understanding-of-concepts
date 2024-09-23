#include <iostream>
using namespace std;
void insert(int arr[], int size)
{
    cout<<"Enter the values to insert "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout<<endl;
}
void display(int arr[], int size)
{
    cout<<"The values  in the Array are : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void update(int arr[], int index, int value)
{
    arr[index] = value;
}
void Search(int arr[], int index)
{
    cout << "The value at index no. : " << index << " is : " << arr[index] << endl;
}
void statistic(int arr[],int size)
{
    int sum=0;
    for (int i =0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Average : "<<(sum/size)<<endl;
}
int main()
{
    int size;
    cout << "Enter the size of the Array ";
    cin >> size;

    int arr[5];
    // set(arr,5);
    // display(arr, 5);
    while (true)
    {
        int choice;
        cout << "1 Insert Element " << endl;
        cout << "2 Display " << endl;
        cout << "3 Update value " << endl;
        cout << "4 Search  " << endl;
        cout << "5 Static define " << endl;
        cout << "Enter Your Choice ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            insert(arr, size);
            break;
        case 2:
            display(arr, size);
            break;
        case 3:
            int index, value;
            cout << "Enter the index numebr ";
            cin >> index;
            cout << "Enter the value ";
            cin >> value;
            update(arr, index, value);
            break;
        case 4:
            int index1;
            cout << "Enter the index number ";
            cin >> index1;
            Search(arr, index1);
            break;
        case 5 :
        statistic(arr,size);
        break;
        case 6:
        cout<<"Existing programming ";
        exit(0);
        
        default:
        cout<<"you Have Entered the Wrong Value "<<endl;
            break;
        }
    }

    return 0;
}