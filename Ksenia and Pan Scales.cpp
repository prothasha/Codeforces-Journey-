#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    string t; cin>>t;
    string first="", second="";
    int ind=s.find('|');
    first=s.substr(0, ind);
    second=s.substr(ind+1);
    int n=first.size()+second.size()+t.size();
    for(int i=0; i<t.size(); i++) {
        if(first.size()>second.size()) second=second+t[i];
        else first=first+t[i];
    }
    if(first.size()!=second.size()) cout<<"Impossible"<<endl;
    else cout<<first<<"|"<<second<<endl;
}
