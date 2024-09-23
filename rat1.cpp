#include<iostream>
#include<vector>
using namespace std;

int  hosue_are( int rat,int unit,vector <int > house )
{
    int sum=0,count=0;

    for(int item : house)
    {
        count=count+1;
        sum = sum+item;
        if(sum>=(unit*rat))
        {
            return count;
        }
    }
}
int main()
{
    int count=0;
    vector <int > house;
    int size;
    int rat;
    int unit;
    cin>>rat;
    cin>>unit;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        int value;
        cin>>value;
        house.push_back(value);
    }
    cout<< "\nTotal House required are : "<<hosue_are(rat, unit,house);
    return 0;

}