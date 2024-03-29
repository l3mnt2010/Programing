#include <iostream>
using namespace std;


int main() {
    int t;
    cout << "Please enter any integer:";
    cin >> t;
    if (t>0){
        cout << t <<" is a positive number" << endl;
    } else if (t<0) {
        cout << t <<" is a negative number" << endl;
    } else {
        cout << "The number entered is zero" << endl;
    }

    return 0;
}

