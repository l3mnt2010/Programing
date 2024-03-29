#include <iostream>
using namespace std;
void  bubbleSort(int a[], int n){
   cout << "ASC" << endl;
   for(int i = 0; i < n ; i++){
    for (int j = 0; j < n-i-1; j++){
        if(a[j]> a[j+1]){
            int t = a[j];
            a[j] = a[j+1];
            a[j+1] = t;
        }
    }
   }
 }

void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "The value of a[" << i+1 << "] is:";
        cin >> a[i];
    }
}

void duyetmang(int a[], int n) {
    cout << n << " element of numeric array:";
    for (int i = 0; i < n; i++) {
        cout << "The value of a[" << i+1 << "] is:" << a[i] << endl;
        if(i != n - 1)
            cout << ":";
    }
}

int main() {
    int length_arr;
    cout << "How many element of numeric array:";
    cin >> length_arr;
    if (length_arr <= 0) {
        cout << "Invalid array length. Please enter a positive integer.";
        return 1;
    }

    int a[length_arr];
    nhapmang(a, length_arr);
    duyetmang(a, length_arr);
    bubbleSort(a, length_arr);
    duyetmang(a, length_arr);

    return 0;
}

