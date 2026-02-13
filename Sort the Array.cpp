#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    vector<int>vec(n), v(n);
    vector<int>ans;
    for(int i=0; i<n; i++) cin>>vec[i];
    v=vec;
    int c=0;
    sort(vec.begin(), vec.end());
    for(int i=0; i<n; i++) {
        if(vec[i]!=v[i]) {
            ans.push_back(i+1);
            c++;
        }
    }
    if(c==0) {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1;
        return 0;
    }
    int l=ans.front()-1; int r=ans.back()-1;
    reverse(v.begin()+l, v.begin()+r+1);
    if(v==vec) {
        cout<<"yes"<<endl;
        cout<<l+1<<" "<<r+1<<endl;
    }
    else cout<<"no"<<endl;
}
