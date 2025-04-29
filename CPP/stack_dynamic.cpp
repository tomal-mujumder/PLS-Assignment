#include <iostream>
#include <vector>
using namespace std;

void demo(int size) {
    vector<int> arr(size); 
    for (int i = 0; i < size; i++) arr[i] = i;
    for (int val : arr) cout << val << " ";
}

int main() {
    demo(5);
    return 0;
}