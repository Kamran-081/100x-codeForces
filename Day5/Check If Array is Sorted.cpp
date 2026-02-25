#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long prev, curr;
    cin >> prev;
    bool sorted = true;

    for (int i = 1; i < n; i++) {
        cin >> curr;
        if (curr < prev) sorted = false;
        prev = curr;
    }

    if (sorted) cout << "YES";
    else cout << "NO";
    return 0;
}
