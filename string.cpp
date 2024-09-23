#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Declare and Initialize Strings
    string str1 = "Hello i am shubham"; //
    int len=str1.size();
    char temp= str1[0];
    str1[0]=str1[len-1];
    str1[len-1]=temp;
    cout<<str1;
}
