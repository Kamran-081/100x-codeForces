#include <iostream>
using namespace std;

void printMessage(int N) {
    for(int i = 0; i < N; i++) {
        cout << "I am learning functions" << endl;
    }
}

int main() {
    int N;
    cin >> N;
    printMessage(N);
    return 0;
}

