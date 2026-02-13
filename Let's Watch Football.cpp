#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c; cin>>a>>b>>c;
    int p=(int)ceil((double)(a*c)/b);;
    int q=p-c;
    if(q<=0) cout<<0<<endl;
    else cout<<q<<endl;
}
