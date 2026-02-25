#include <iostream>
using namespace std;

int main() {
    int n;
    long long x, a;
    cin >> n >> x;

    long long count = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == x) count++;
    }

    cout << count;
    return 0;
}
