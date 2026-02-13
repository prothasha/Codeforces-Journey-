#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int a, b, ans;
        cin>>a>>b;
        if(a==b) {
            ans=4*a*a;
        }
        else if(a>b) {
            int c=2*b;
            if(c<a) ans=a*a;
            else if(c>a) ans=c*c;
            else ans=c*c;
        }
        else if(a<b) {
            int c=2*a;
            if(c<b) ans=b*b;
            else if(c>b) ans=c*c;
            else ans=c*c;
        }
        cout<<ans<<endl;
    }
    return 0;
}
