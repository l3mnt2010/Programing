#include <iostream>
#include <cmath>

using namespace std;

void checkNguyenTo(long long n) {
    bool isNto = true;

    if (n <= 1) {
        isNto = false;
    } else {
        for (int i = 3; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isNto = false;
                break;
            }
        }
    }

    if (isNto) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    long long n;
    cin >> n;
    checkNguyenTo(n);
    return 0;
}

