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
        vector<char>vec;
        for(int i=0; i<t; i++) vec.push_back(w[i]);
        int m=vec.size();
        sort(vec.begin(), vec.end());
        vec.erase(unique(vec.begin(), vec.end()), vec.end());
        int n=vec.size();
        cout<<m+n<<endl;;
    }
}

