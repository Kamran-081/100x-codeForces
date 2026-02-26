#include <iostream>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;
    long long a[n];
    int count = 0;

    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++)
                for (int l = k + 1; l < n; l++)
                    if (a[i] + a[j] + a[k] + a[l] == x)
                        count++;

    cout << count;
    return 0;
}
