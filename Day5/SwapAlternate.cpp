#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[n];

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i + 1 < n; i += 2) {
        long long t = a[i];
        a[i] = a[i + 1];
        a[i + 1] = t;
    }

    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
