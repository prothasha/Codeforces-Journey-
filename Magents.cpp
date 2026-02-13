#include <iostream>
using namespace std;

int main() {
    int n, g=1;
    string p,c;

    cin>>n>>p;
    for (int i=1;i<n; i++) {
        cin>>c;
        if (c!=p) g++;
        p=c;
    }

    cout<<g<<endl;
    return 0;
}
