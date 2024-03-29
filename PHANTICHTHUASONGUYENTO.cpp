#include <iostream>

using namespace std;

void phanTichThanhThuaSoNguyenTo(long long n) {
    for (int i = 2; i * i <= n; ++i) {
        int count = 0;
        while (n % i == 0) {
            n /= i;
            ++count;
        }
        if (count > 0) {
            cout << i << " " << count << endl;
        }
    }

    if (n > 1) {
        cout << n << " " << 1 << endl;
    }
}

int main() {
    long long n;
    cin >> n;
    phanTichThanhThuaSoNguyenTo(n);

    return 0;
}

