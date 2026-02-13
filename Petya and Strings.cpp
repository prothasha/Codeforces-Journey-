#include<bits/stdc++.h>
using namespace std;
int main() {
    string x, y;
    cin>>x>>y;
    int l1=x.length();
    int l2=y.length();
        for(int i=0; i<l1; i++){
            x[i]=tolower(x[i]);
        }
        for(int i=0; i<l2; i++){
            y[i]=tolower(y[i]);
        }
        if (x==y) {
            cout<<0<<endl;
        }
        else if (x>y) {
            cout<<1<<endl;
        }
        else {
            cout<<-1<<endl;
        }

    return 0;
}
