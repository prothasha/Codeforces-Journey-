#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int m;
        cin>>m;
        string s;
        cin>>s;
        int co1=0, co2=0;
        bool fo=false;
        for(int i=0; i<m; i++) {
            if(s[i]=='U') co1=co1+1;
            else if(s[i]=='R') co2=co2+1;
            else if(s[i]=='L') co2=co2-1;
            else if(s[i]=='D') co1=co1-1;
            if(co1==1 && co2==1) {
                cout<<"Yes"<<endl;
                fo=true;
                break;
            }
        }
        if(!fo) cout<<"No"<<endl;
    }
    return 0;
}
