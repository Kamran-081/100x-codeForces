#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    unordered_map<long long, long long> mp;
    long long count = 0;

    for(int i = 0; i < n; i++) {
        long long a;
        cin >> a;

        count += mp[x - a];
        mp[a]++;
    }

    cout << count;
}
