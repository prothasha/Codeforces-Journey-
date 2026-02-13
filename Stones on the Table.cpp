#include<bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin>>x;
    string p;
    cin>>p;
    int c=0;
    for(int i=0; i<x; i++) {
        if(p[i]==p[i+1]) {
            c++;
        }
    }
    cout<<c<<endl;
}

