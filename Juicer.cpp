#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, b, d; cin>>n>>b>>d;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    int co=0, c=0;
    for(int i=0; i<n; i++) {
        if(vec[i]<=b) co+=vec[i];
        if(co>d) {
            c++;
            co=0;
        }
    }
    cout<<c;
}
