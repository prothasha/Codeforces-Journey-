#include<bits/stdc++.h>
using namespace std;
int main(){
    int r1, r2, c1, c2, d1, d2; cin>>r1>>r2>>c1>>c2>>d1>>d2;
    int p1, p2, p3, p4;
    p1=(c1+r1-d2)/2;
    p2=r1-p1;
    p3=c1-p1;
    p4=c2-p2;

    bool ok=true;
    if(p1==p2 || p2==p3 || p3==p4 || p4==p1 || p1==p3 || p2==p4) ok=false;
    else if(p1<1 || p1>9 || p2<1 || p2>9 || p3<1 || p3>9 || p4<1 || p4>9) ok=false;
    else if(p1+p2!=r1 || p3+p4!=r2 || p1+p3!=c1 || p2+p4!=c2 || p1+p4!=d1 || p2+p3!=d2) ok=false;

    if(!ok) cout<<-1;
    else cout<<p1<<" "<<p2<<endl<<p3<<" "<<p4;
}

