#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int t, x;
        cin>>t>>x;
        vector<int>vec(t);
        bool found=false;
        for(int i=0; i<t; i++) {
            cin>>vec[i];
            if(vec[i]==x) found=true;
        }

        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
