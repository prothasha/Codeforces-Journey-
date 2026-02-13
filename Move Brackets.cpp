#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int x; cin>>x;
        string s;
        cin>>s;
        int co=0, m=0;
        for(int i=0; i<x; i++) {
            if(s[i]=='(') co++;
            else{
                co--;
                if(co<0) {
                    m++;
                    co=0;
                }
            }
        }
        cout<<m<<endl;
    }
}

