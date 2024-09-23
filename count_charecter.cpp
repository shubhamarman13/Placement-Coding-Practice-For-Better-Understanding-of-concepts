// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>

// using namespace std;
// int main()
// {
//     string name="aaabbab";
//     vector <char> name2;
//     sort(name.begin(),name.end());
//     for(char item : name)
//     {
//         if(name2.empty() ||item !=name2.back())
//         {
//             name2.push_back(item);
//         }
//     }
//     for(char item : name2)
//     {
//        int x =  count(name.begin(),name.end(),item);
//        cout<< x <<" ";
//     }

// }
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    string name = "aaabbabccc";
    sort(name.begin(),name.end());
    auto len= unique(name.begin(),name.end());
    int newLen= (name.size())-(newLen);2
    name.erase(len,name.end());

for(int i =0 ; i < *len;i++)
{
    // cout<<name[i]<<" ";
}
//     vector <int>  counting;
//     vector <char> new_name;
//     for( int item : name)
//     {

//       int x = count(name.begin(),name.end(),item);
//       cout<<x<<" ";
//     }
 
    
}