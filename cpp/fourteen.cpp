#include <iostream>
using namespace std;

int main() {
    string message;
    cin >> message;
    
    while (message != "cat") {
        cin >> message;
    }
    
    cout << "CATS!";
    return 0;
}
