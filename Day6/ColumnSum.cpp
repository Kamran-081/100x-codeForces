#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    long long sum[1000] = {0};
    for (int i = 0; i < n; i++)
        for (int j = 0, x; j < m; j++) {
            cin >> x;
            sum[j] += x;
        }

    for (int j = 0; j < m; j++)
        cout << sum[j] << " ";
}
