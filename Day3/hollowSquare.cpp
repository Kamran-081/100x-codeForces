#include <iostream>
using namespace std;

int main() {
     int i, n, j;
    cin >> n;
    for(i = 1; i <= n; i++) {
         cout << "* ";
    }

    for(j = 2; j <= n-1; j++) {
        cout << "\n* ";
        for(int k = 2; k<=n-1; k++) {
            cout << "  ";
        }
        cout << "*";
    }

    cout << "\n";
    for(i = 1; i <= n; i++) {
         cout << "* ";
    }
    
    return 0;
}