#include <iostream>
#include <vector>
#include <algorithm> // For std::binary_search
using namespace std;

int main() {
    // Define and sort the vector
    std::vector<int> vec = {23, 14, 6, 18, 110, 102, 14, 106};
    sort(vec.begin(),vec.end());
    bool value= binary_search(vec.begin(),vec.end(),68);
    cout<<value;
    return 0;
}
