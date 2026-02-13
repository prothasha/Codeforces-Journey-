#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    for(char c:s){
        if(c!='4' && c!='7'){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    int x=n/2, l=0, r=0;
    for(int i=0; i<x; i++) l+=s[i]-'0';
    for(int i=x; i<n; i++) r+=s[i]-'0';
    if(l==r) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
