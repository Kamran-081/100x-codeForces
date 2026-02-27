#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int idx = -1, mx = 0;

    for (int i = 0; i < n; i++) {
        int c = 0, x;
        for (int j = 0; j < m; j++) {
            cin >> x;
            c += x;
        }
        if (c > mx) {
            mx = c;
            idx = i;
        }
    }
    cout << (mx == 0 ? -1 : idx);
}
