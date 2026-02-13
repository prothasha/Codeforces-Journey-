#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int max1=0, ans=0;
        for(int i=0; i<n; i++) {
            int a, b;
            cin>>a>>b;
            if(a<=10) {
                max1=max(max1, b);
                if(b==max1) ans=i+1;
            }
        }
        cout<<ans<<endl;
    }
}
