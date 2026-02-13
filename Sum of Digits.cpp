#include<bits/stdc++.h>
using namespace std;
int main() {
    string s; cin>>s;
    if(s.size()== 1) {
        cout << 0;
        return 0;
    }
    int co=0;
    while(s.size()>1) {
        long long sum=0;
        for(char c : s) sum+=(c-'0');
        s=to_string(sum);
        co++;
    }
    cout<<co;
}
