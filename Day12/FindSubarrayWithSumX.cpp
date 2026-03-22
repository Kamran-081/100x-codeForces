#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    unordered_map<long long, int> mp;
    mp[0] = 0;

    long long sum = 0;

    for(int i = 1; i <= n; i++) {
        long long a;
        cin >> a;
        sum += a;

        if(mp.count(sum - x)) {
            cout << mp[sum - x] + 1 << " " << i;
            return 0;
        }

        mp[sum] = i;
    }

    cout << -1;
}
