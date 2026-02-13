#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b; cin>>a>>b;
    int ans=0;
    while(a>0 && b>0 &&! (a==1 && b==1)){
        if(a<b) swap(a,b);
        a-=2;
        b+=1;
        ans++;
    }
    cout<<ans<<endl;
}
