#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    unordered_map<long long, int> mp;

    for(int i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        mp[x] = i;
    }

    while(q--) {
        long long x;
        cin >> x;
        if(mp.count(x)) cout << mp[x] << "\n";
        else cout << -1 << "\n";
    }
}
