#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> v;

    for(long long i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            cout << i << " ";

            if(i != n / i)
                v.push_back(n / i);
        }
    }

    for(int i = v.size() - 1; i >= 0; i--)
        cout << v[i] << " ";

    return 0;
}
