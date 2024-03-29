#include <iostream>
using namespace std;

int main() {
    cout << "Alphabet" << endl;
    for(char c = 'A'; c <= 'Z'; ++c) {
        if (c == 'Z'){
            cout << c << endl;
        } else {
            cout << c << ", ";
        }
    }
    cout << endl;
    return 0;
}

