#include <iostream>
using namespace std;

int main() {
    cout << "alphabet" << endl;
    for(char c = 'a'; c <= 'z'; ++c) {
        if (c == 'z'){
            cout << c << endl;
        } else {
            cout << c << ", ";
        }
    }
    cout << endl;
    return 0;
}

