#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Please enter a number divisible by 5 but not divisible by 3:";
    cin >> n;
    if (n % 5 == 0  && n % 3 != 0){
        cout << "Thank you." << endl;
    }
    else {
            cout << n << " isn't a number divisible by 5 but not divisible by 3." << endl;
    }
    return 0;
}

