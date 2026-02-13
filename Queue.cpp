#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    sort(vec.begin(), vec.end());
    int t=0, c=0;
    for(int i=0; i<n; i++) {
        if(vec[i]>=t) {
            c++;
            t+=vec[i];
        }
        else continue;
    }
    cout<<c<<endl;
}
