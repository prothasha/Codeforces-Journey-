#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int t;
        cin>>t;
        int s=2*t;
        vector<int>vec;
        for(int i=0; i<s; i++) {
            int x;
            cin>>x;
            vec.push_back(x);
        }
        int c1=0, c2=0;
        for(int i=0; i<s; i++) {
            if(vec[i]%2==0) c1++;
            else if(vec[i]%2!=0) c2++;
        }
        if(c1==c2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
