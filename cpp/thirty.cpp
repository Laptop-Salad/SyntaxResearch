#include <iostream>
using namespace std;

int main() {
    string arr[3] = {"Goodbye", "world", "."};
    
    int arrSize = sizeof(arr) / sizeof(string);
    
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i];
    }
    
    return 0;
}
