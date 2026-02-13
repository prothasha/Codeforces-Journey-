#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    while(n--) {
        string w;
        cin>>w;
        set<char>p;
        for(int i=0; i<w.size(); i++) p.insert(w[i]);
        if(p.size()==1) cout<<"No"<<endl;
        else {
            for(int i=0; i<w.size()-1; i++) {
                swap(w[i], w[i+1]);
            }
            cout<<"Yes"<<endl<<w<<endl;
        }
    }
}
