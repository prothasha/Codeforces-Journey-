#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b; cin>>n>>a>>b;
    int r=(a+b-1)%n;
    if(r<0) r=r+n;
    cout<<r+1;
}
