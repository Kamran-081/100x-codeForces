#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int mn = INT_MAX;
        for (int j = 0; j < m; j++) {
            cin >> x;
            if (x < mn) mn = x;
        }
        cout << mn << " ";
    }
}
