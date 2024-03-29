#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Please enter a number divisible by 5 and divisible by 2:";
    cin >> n;
    if (n % 5 == 0  && n % 2 == 0 && n != 0){
        cout << "Thank you." << endl;
    }
    else {
            cout << n << " isn't a number divisible by 5 and divisible by 2." << endl;
    }
    return 0;
}

