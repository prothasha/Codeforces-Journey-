#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int t;
        cin>>t;
        string w;
        cin>>w;
        int l;
        cin>>l;
        string extra, serial;
        cin>>extra>>serial;
        vector<char>vec;
        for(int i=0; i<t; i++) {
            vec.push_back(w[i]);
        }
        for(int i=0; i<l; i++) {
            if(serial[i]=='V') vec.insert(vec.begin(), extra[i]);
            else if(serial[i]=='D') vec.push_back(extra[i]);
        }
        for(char j:vec) cout<<j;
        cout<<endl;
    }
    return 0;
}
