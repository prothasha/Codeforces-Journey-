#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s="codeforces";
    for(int i=0; i<n; i++) {
        int c=0;
        string w;
        cin>>w;
        for(int i=0, j=0; i<s.size(), j<w.size(); i++, j++) {
            if(s[i]==w[j]) c++;
        }
    cout<<s.size()-c<<endl;
    }
    return 0;
}
