#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n; cin>>n;
    vector<bool>p(n+1, false);
    int q=n;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        p[x]=true;
        while(q>0 && p[q]) {
            cout<<q<<" ";
            q--;
        }
        cout<<endl;
    }
}
int main(){
    p();
    code();
}
