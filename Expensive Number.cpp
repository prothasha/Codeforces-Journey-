#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string s; cin>>s;
        int c=0;
        int p=-1;
        for(int i=s.size()-1; i>=0; i--) {
            if(s[i]!='0') {
                p=i;
                break;
            }
        }
        vector<char>vec;
        for(int i=0; i<=p; i++) {
            if(s[i]!='0' && i!=p) continue;
            else vec.push_back(s[i]);
        }
        c=s.size()-vec.size();
        cout<<c<<endl;
    }
}
