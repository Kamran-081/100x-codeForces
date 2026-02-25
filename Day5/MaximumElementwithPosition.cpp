#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long x, mx;
    int pos = 1;

    cin >> mx;
    for (int i = 2; i <= n; i++) {
        cin >> x;
        if (x > mx) {
            mx = x;
            pos = i;
        }
    }

    cout << mx << " " << pos;
    return 0;
}
