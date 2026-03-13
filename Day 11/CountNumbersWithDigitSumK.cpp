#include <iostream>
using namespace std;

int digitSum(int x){
    int sum = 0;
    while(x){
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main(){
    int n,q,k;
    cin >> n >> q >> k;

    int a[n+1], b[n+1], prefix[n+1];

    for(int i=1;i<=n;i++){
        cin >> a[i];

        if(digitSum(a[i]) == k)
            b[i] = 1;
        else
            b[i] = 0;
    }

    prefix[0] = 0;

    for(int i=1;i<=n;i++)
        prefix[i] = prefix[i-1] + b[i];

    while(q--){
        int l,r;
        cin >> l >> r;

        cout << prefix[r] - prefix[l-1] << endl;
    }
}
