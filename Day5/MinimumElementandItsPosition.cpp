#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long x, mn;
    int pos = 1;

    cin >> mn;
    for (int i = 2; i <= n; i++) {
        cin >> x;
        if (x < mn) {
            mn = x;
            pos = i;
        }
    }

    cout << mn << " " << pos;
    return 0;
}
