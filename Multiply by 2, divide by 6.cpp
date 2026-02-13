#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>vec;
    while(n--) {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    for(int i=0; i<vec.size(); i++) {
        int x=vec[i];
        int ans=0;
        while(x!=1) {
            if(x%6==0) {
                x/=6;
                ans++;
            }
            else if(x%3==0) {
                x*=2;
                ans++;
            }
            else {
                ans=-1;
                break;
            }
        }
    cout<<ans<<endl;
    }
}
