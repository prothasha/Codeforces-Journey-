#include<bits/stdc++.h>
using namespace std;
int main(){
    int a; cin>>a;
    int b; cin>>b;
    int c=a+b;
    string s1, s2, cc;
    s1=to_string(a), s2=to_string(b), cc=to_string(c);
    s1.erase(remove(s1.begin(), s1.end(), '0'), s1.end());
    s2.erase(remove(s2.begin(), s2.end(), '0'), s2.end());
    cc.erase(remove(cc.begin(), cc.end(), '0'), cc.end());
    int q=stoi(s1)+stoi(s2);
    int p=stoi(cc);
    if(p==q) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

