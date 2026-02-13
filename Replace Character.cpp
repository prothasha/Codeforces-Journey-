#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        map<char,int>m;
        for(int i=0; i<n; i++) m[s[i]]++;
        vector<pair<int,char>>vec;
        for(auto i:m) vec.push_back({i.second,i.first});
        sort(vec.begin(),vec.end());
        char c=vec.begin()->second, d=vec.rbegin()->second;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                s[i]=d;
                break;
            }
        }
        cout<<s<<endl;
    }
}
