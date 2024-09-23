// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// bool one(char var)
// {
//     return var=='1';
// }
// int main()
// {
//     string a;
//     cout<<"Enter the string ";
//     getline(cin,a);
//     partition(a.begin(),a.end(),one);
//     cout<<a;
// }
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Predicate function to check if a character is '#'


int main() {
    string a;
    string value="";
    string value2="";
    cout << "Enter the string: ";
    getline(cin, a);

    for ( char c : a)
    {
        if (c=='#')
        {
            value=value+c;
        }
        else
        {
            value2=value2+c;
        }
    }
    cout<<value+value2;

    return 0;
}
