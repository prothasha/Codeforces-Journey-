#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin>>n>>s;
    vector<char>vec(n);
    for(int i=0; i<n; i++) {
        vec[i]=s[i];
        vec[i]=tolower(vec[i]);
    }
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    int l=vec.size();
    if(l==26) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}
