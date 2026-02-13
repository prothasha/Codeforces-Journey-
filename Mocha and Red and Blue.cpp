#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        string s; cin>>s;
        vector<char>ans(n);
        for(int i=0; i<n; i++) ans[i]=s[i];
        if(n==1){
            if(ans[0]=='?') ans[0]='B';
            cout<<ans[0]<<endl;
            continue;
        }
        if(ans[0]=='?'){
            int c=-1;
            for(int i=1; i<n; i++){
                if(ans[i]!='?'){
                    c=i;
                    if(c%2==0) ans[0]=ans[i];
                    else {
                        if(ans[i]=='R') ans[0]='B';
                        else ans[0]='R';
                    }
                    break;
                }
            }
            if(c==-1) ans[0]='B';
        }
        for(int i=1; i<n; i++){
            if(ans[i]=='?'){
                if(ans[i-1]=='R') ans[i]='B';
                else if(ans[i-1]=='B') ans[i]='R';
            }
        }
        for(char i: ans) cout<<i;
        cout<<endl;
    }
}
