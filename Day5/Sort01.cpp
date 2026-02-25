#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int zero = 0, one = 0, x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 0) zero++;
        else one++;
    }

    for (int i = 0; i < zero; i++) cout << 0 << " ";
    for (int i = 0; i < one; i++) cout << 1 << " ";
    return 0;
}
