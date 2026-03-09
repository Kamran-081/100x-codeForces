#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        for(int i=0;i<s.size();i++){
            int count=1;

            while(i+1<s.size() && s[i]==s[i+1]){
                count++;
                i++;
            }

            cout<<s[i];
            if(count>1) cout<<count;
        }

        cout<<endl;
    }
}
