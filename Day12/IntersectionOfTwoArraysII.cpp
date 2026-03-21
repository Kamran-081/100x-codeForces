#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    map<long long, int> mp;

    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        mp[x]++;
    }

    cin >> m;

    vector<long long> res;

    for(int i = 0; i < m; i++) {
        long long x;
        cin >> x;
        if(mp[x] > 0) {
            res.push_back(x);
            mp[x]--;
        }
    }

    sort(res.begin(), res.end());

    cout << res.size() << "\n";
    for(auto x : res) cout << x << " ";
}
