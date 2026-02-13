#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++) {
        string s;
        getline(cin, s);
        for(int i=0; i<s.size(); i++) {
            if(i==0) cout<<s[i];
            if(s[i]==' ') cout<<s[i+1];
        }
        cout<<endl;
    }
}
