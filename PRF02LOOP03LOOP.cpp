#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Please enter the positive integer N:";
    cin >> N;
    if (N <= 0){
        cout << "N must be greater than 0!" << endl;
    } else {
       cout << "The number-triangle that has " << N <<" lines is:"<< endl;
       for(int i = 1; i <= N; i++) {
            for (int j = 1;j <= i; j++){
                cout << i << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

