#include <iostream>
using namespace std;

int main() {
     int i, n, m, j;
     cout << "enter m and n for rect. " << endl;
    cin >> m;
    cin >> n;
    for(i = 1; i <= m; i++) {
         cout << "* ";
    }

    for(j = 2; j <= n-1; j++) {
        cout << "\n* ";
        for(int k = 2; k<=m-1; k++) {
            cout << "  ";
        }
        cout << "*";
    }

    cout << "\n";
    for(i = 1; i <= m; i++) {
         cout << "* ";
    }
    
    return 0;
}