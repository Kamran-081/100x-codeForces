#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long count = 0;

    for(long long i = 1; i <= n; i++) {
        if(n % i == 0) {
            count++;

            if(count == k) {
                cout << i;
                return 0;
            }
        }
    }

    cout << -1;

    return 0;
}
