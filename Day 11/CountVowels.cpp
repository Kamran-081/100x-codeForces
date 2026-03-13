#include <iostream>
using namespace std;

bool vowel(char c){
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int prefix[n+1];
    prefix[0] = 0;

    for(int i=1;i<=n;i++){
        if(vowel(s[i-1]))
            prefix[i] = prefix[i-1] + 1;
        else
            prefix[i] = prefix[i-1];
    }

    int q;
    cin >> q;

    while(q--){
        int l,r;
        cin >> l >> r;

        cout << prefix[r] - prefix[l-1] << endl;
    }
}
