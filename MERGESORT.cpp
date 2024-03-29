#include <iostream>
using namespace std;

int* mergeSort(int a[], int L, int R);

int* sortArray(int a[], int n) {
    return mergeSort(a, 0, n-1);
}

int* mergeSort(int a[], int L, int R) {
    if (L == R) {
        int* singleElement = new int[1]{a[L]};
        return singleElement;
    }
    if (L > R) {
        return new int[0];
    }

    int k = (L + R) / 2;
    int* a1 = mergeSort(a, L, k);
    int* a2 = mergeSort(a, k + 1, R);

    int n = (R - L + 1);
    int* result = new int[n];

    int i = 0, i1 = 0, i2 = 0;
    while (i < n) {
        if (i1 < (k - L + 1) && i2 < (R - k)) {
            if (a1[i1] <= a2[i2]) {
                result[i] = a1[i1];
                i++;
                i1++;
            } else {
                result[i] = a2[i2];
                i++;
                i2++;
            }
        } else {
            if (i1 < (k - L + 1)) {
                result[i] = a1[i1];
                i++;
                i1++;
            } else {
                result[i] = a2[i2];
                i++;
                i2++;
            }
        }
    }
    return result;
}

void nhapmang(int a[], int n){
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
}

void duyetmang(int a[], int length) {
    for (int i = 0; i < length; i++) {
        cout << a[i] << endl;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    nhapmang(a, n);
    int* arr = sortArray(a,n);
    duyetmang(arr, n);
    delete[] arr;
    return 0;
}

