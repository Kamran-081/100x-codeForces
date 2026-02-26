#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum = 0, x;

    for (int i = 0; i < n - 1; i++) {
        cin >> x;
        sum += x;
    }

    long long total = (long long)n * (n + 1) / 2;
    cout << total - sum;
    return 0;
}
