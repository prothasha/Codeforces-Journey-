#include<bits/stdc++.h>
using namespace std;
int main() {
    string w; cin>>w;
    bool p=false;
    int i=0;
    while(i<w.size()) {
        if(w[i]=='1' && w[i+1]=='4' && w[i+2]=='4' && i+2<w.size()) i+=3;
        else if(w[i]=='1' && w[i+1]=='4' && i+1<w.size()) i+=2;
        else if(w[i]=='1') i++;
        else {
            p=true;
            break;
        }
    }
    if(p) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
