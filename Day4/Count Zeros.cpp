#include <iostream>
using namespace std;

long long countZeros(long long N) {
    if(N == 0) return 1;
    long long count = 0;
    while(N > 0) {
        if(N % 10 == 0)
            count++;
        N /= 10;
    }
    return count;
}

int main() {
    long long N;
    cin >> N;
    cout << countZeros(N);
    return 0;
}
