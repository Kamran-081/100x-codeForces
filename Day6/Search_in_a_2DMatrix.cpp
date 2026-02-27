#include <iostream>
using namespace std;

int main() {
    int n, m, x, v;
    cin >> n >> m >> x;
    bool found = false;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> v;
            if (v == x) found = true;
        }
    cout << (found ? "true" : "false");
}
