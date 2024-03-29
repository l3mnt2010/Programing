#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Please enter an odd number:";
    cin >> n;
    if (n % 2 != 0){
        cout << "Thank you." << endl;
    }
    else {
     if( n == 0 ){
        cout << "0 is zero."<< endl;
     } else {
        cout << n << " isn't an odd number." << endl;
     }
    }
    return 0;
}

