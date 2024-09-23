#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
   int size ;
   cout<<"Enetr the size of the  edge";
   cin>>size;
    int numNodes = 3;
    vector<vector<int>> next_ndoe(numNodes);
    vector<string> nodeNames(numNodes);
    nodeNames[0] = "A";
    nodeNames[1] = "B";
    nodeNames[2] = "C";

    next_ndoe[0].push_back(1); 
    next_ndoe[1].push_back(0); 
    
    next_ndoe[1].push_back(2); 
    next_ndoe[2].push_back(1);
    
    next_ndoe[2].push_back(0);
    next_ndoe[0].push_back(2); 

    // Display the graph
    for (int i = 0; i < numNodes; ++i) {
        cout << nodeNames[i] << ": ";
        for (int j : next_ndoe[i]) {
            cout << nodeNames[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
