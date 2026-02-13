#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int a, b, c, d, co=0;
        cin>>a>>b>>c>>d;
        vector<int>vec={a, b, c, d};
        int m1=max(a, b);
        int m2=max(c, d);
        sort(vec.begin(), vec.end());
        if(vec[2]==m1 && vec[3]==m2) cout<<"YES"<<endl;
        else if(vec[2]==m2 && vec[3]==m1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
