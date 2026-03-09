#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        int minIndex=0;

        for(int i=1;i<n;i++){
            if(a[i]<a[minIndex]) minIndex=i;
        }

        cout<<minIndex<<endl;
    }
}
