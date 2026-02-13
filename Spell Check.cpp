#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        int t;
        cin>>t;
        string s;
        cin>>s;
        vector<char>vec;
        if (t!=5) {
            cout<<"NO"<<endl;
            continue;
        }
        sort(s.begin(), s.end());
        string w="Timur";
        sort(w.begin(), w.end());
        if (s==w) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
