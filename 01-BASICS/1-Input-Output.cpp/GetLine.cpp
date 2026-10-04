#include <iostream>
#include <string>
using namespace std;

int main() {
    //taking a complete line including spaces
    string fullName;

    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Your name is: " << fullName;

    return 0;
}