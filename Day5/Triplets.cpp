#include <iostream>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;
    long long a[n];

    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++)
                if (a[i] + a[j] + a[k] == x)
                    cout << a[i] << " " << a[j] << " " << a[k] << endl;

    return 0;
}
