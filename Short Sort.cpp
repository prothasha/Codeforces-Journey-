#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        string s;
        cin>>s;
        if(s=="abc" || s=="acb" || s=="bac" || s=="cba") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
