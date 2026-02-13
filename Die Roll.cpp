#include<bits/stdc++.h>
using namespace std;
int main() {
    int x, y, c=1;
    cin>>x>>y;
    int m=max(x, y);
    while(m<6) {
        c++;
        m++;
    }
    if(c==1) cout<<"1/6"<<endl;
    if(c==2) cout<<"1/3"<<endl;
    if(c==3) cout<<"1/2"<<endl;
    if(c==4) cout<<"2/3"<<endl;
    if(c==5) cout<<"5/6"<<endl;
    if(c==6) cout<<"1/1"<<endl;
}
