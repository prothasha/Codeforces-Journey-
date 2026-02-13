#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m; char c; cin>>n>>m>>c;
    vector<string>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    set<char>s;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(vec[i][j]==c) {
                if(i>0) s.insert(vec[i-1][j]);
                if(j>0) s.insert(vec[i][j-1]);
                if(i<n-1) s.insert(vec[i+1][j]);
                if(j<m-1) s.insert(vec[i][j+1]);
            }
        }
    }
    s.erase('.'); s.erase(c);
    cout<<s.size()<<endl;
}
