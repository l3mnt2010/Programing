#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Please enter an even number:";
    cin >> n;
    if (n % 2 == 0){
        if( n == 0 ){
        cout << "0 is zero."<< endl;
        } else {
        cout << "Thank you." << endl;
        }
    }
    else {
        cout << n << " isn't an even number." << endl;
    }
    return 0;
}

