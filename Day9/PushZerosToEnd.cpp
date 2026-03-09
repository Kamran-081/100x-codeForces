#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long a[n];
        int pos=0;

        for(int i=0;i<n;i++) cin>>a[i];

        for(int i=0;i<n;i++){
            if(a[i]!=0){
                cout<<a[i]<<" ";
                pos++;
            }
        }

        for(int i=pos;i<n;i++) cout<<"0 ";

        cout<<endl;
    }
}
