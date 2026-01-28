// You are given a positive integer n, print a pattern consisting of n
//  rows, where each row contains exactly two stars ('**').

#include <iostream>
using namespace std;

int main() {
    int i, n;
    cin >> n;
    for(i = 1; i <= n; i++) {
        for(int j = 1; j<=2; j++) {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}