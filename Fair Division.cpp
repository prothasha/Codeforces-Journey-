#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int m=0;
    while(n--) {
        int x;
        cin>>x;
        int c1=0, c2=0;
        vector<int>vec(x);
        for(int i=0; i<x; i++) {
            cin>>vec[i];
            if(vec[i]==1) c1++;
            else c2++;
        }
        int t=1*c1+2*c2;
        if(t%2!=0) cout<<"NO"<<endl;
        else {
            int h=t/2;
            if(c1==0 && h%2==1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}

