#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin>>n>>m;
    if(n < m) {
        if(n%2==1) cout<<"Akshat";
        else cout<<"Malvika";
    }
    else {
        if(m%2==1) cout<<"Akshat";
        else cout<<"Malvika";
    }
}
