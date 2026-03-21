#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    unordered_map<long long, int> mp;

    for(int i = 1; i <= n; i++) {
        long long a;
        cin >> a;

        if(mp.count(x - a)) {
            cout << mp[x - a] << " " << i;
            return 0;
        }

        mp[a] = i;
    }

    cout << -1;
}
