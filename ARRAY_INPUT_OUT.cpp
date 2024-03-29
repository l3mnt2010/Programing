#include <iostream>
using namespace std;

void nhapmang(int a[], int n) {
    cout << "How many element of numeric array:";
    for (int i = 0; i < n; i++) {
        cout << "The value of a[" << i+1 << "] is:";
        cin >> a[i];
    }
}

void duyetmang(int a[], int n) {
    cout << n << " element of numeric array:";
    for (int i = 0; i < n; i++) {
        cout << "The value of a[" << i+1 << "] is:" << a[i];
        if(i != n - 1)
            cout << ":";
    }
}

int main() {
    int length_arr;
    cin >> length_arr;

    if (length_arr <= 0) {
        cout << "Invalid array length. Please enter a positive integer.";
        return 1;
    }

    int a[length_arr];
    nhapmang(a, length_arr);
    duyetmang(a, length_arr);

    return 0;
}

