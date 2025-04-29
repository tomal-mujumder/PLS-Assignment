#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    for (int i = 1; i <= 5; i++) arr.push_back(i);
    for (int val : arr) cout << val << " ";
    return 0;
}