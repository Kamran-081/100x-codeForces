#include <iostream>
using namespace std;

int main() {
    int n;
    long long x, a;
    cin >> n >> x;

    bool found = false;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == x) found = true;
    }

    if (found) cout << "YES";
    else cout << "NO";

    return 0;
}
