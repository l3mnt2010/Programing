#include <iostream>
#include <cmath>

using namespace std;

long long giaiThua(int n) {
    if (n == 1){
        return 1;
    }
    return n*giaiThua(n-1);
}

int main() {
    int n;

    while (true) {
        cin >> n;
        if(n==0){
            break;
        }
        cout << giaiThua(n) << endl;
    }

    return 0;
}

