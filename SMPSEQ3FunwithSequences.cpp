#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> S(n);
    for (int i = 0; i < n; ++i) {
        cin >> S[i];
    }
    cin >> m;
    vector<int> Q(m);
    for (int i = 0; i < m; ++i) {
        cin >> Q[i];
    }
    for (int i = 0; i < n; ++i) {
        if (find(Q.begin(), Q.end(), S[i]) == Q.end()) {
            cout << S[i] << " ";
        }
    }
    cout << endl;

    return 0;
}

