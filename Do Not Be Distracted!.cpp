#include<bits/stdc++.h>
using namespace std;
int main() {
    int p;
    cin>>p;
    while(p--) {
        int t;
        cin>>t;
        string s;
        cin>>s;
        int f[26]={0};
        int i=0;
        while (i<t) {
            char c=s[i];
            int index=c-'A';
            if (f[index]==1) {
                cout<<"NO"<<endl;
                break;
            }
            while (i<t && s[i]==c) {
                i++;
            }
            f[index]=1;
        }
        if(i==t) {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

