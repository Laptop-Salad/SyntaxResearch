#include <iostream>
using namespace std;

int main() {
    string animal = "cat";
    
    if (animal == "cat") {
        cout << "Gives cat a fish";
    } else if (animal == "dog") {
        cout << "Gives dog a bone";
    } else {
        cout << "I dont know what that is";
    }
    
    return 0;
}
