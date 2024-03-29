#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double n;
    cout << "Please enter any number: ";
    cin >> n;
    if (n < 0){
        cout << "Accept positive number only!" << endl;
    }
    else {
        cout << "Square root of " << fixed << setprecision(6) << (double)n << " is "<< fixed << setprecision(6) << sqrt(n) << endl;
    }
    return 0;
}
