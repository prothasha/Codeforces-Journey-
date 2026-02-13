#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int t, k;
        cin>>t>>k;
        vector<int>vec;
        for(int i=0; i<t; i++) {
            int x;
            cin>>x;
            vec.push_back(x);
        }
        bool sorted=true;
        for(int i=0; i<t-1; i++) {
            if(vec[i]>vec[i+1]) {
                sorted=false;
                break;
            }
        }

        if(k==1 && !sorted) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
