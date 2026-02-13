#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s, w; cin>>s>>w;

        int j = 0;
        for(int i=0; i<s.size(); i++){
            if(j<w.size()){
                if(s[i]==w[j]) j++;
                else if(s[i]=='?'){
                    s[i]=w[j];
                    j++;
                }
            }
            if(s[i]=='?'){
                s[i]='a';
            }
        }
        if(j==w.size())cout<<"YES"<<endl<<s<<endl;
        else cout<<"NO"<<endl;
    }
}
