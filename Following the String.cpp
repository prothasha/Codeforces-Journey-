#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int m=0;
    while(n--) {
        int t;
        cin>>t;
        vector<int>a(t);
        for (int i=0; i<t; i++) {
            cin>>a[i];
        }
        vector<int>ch(26, 0);
        vector<char> ans;
        for(int i=0; i<t; i++) {
            for(int j=0; j<26; j++) {
                if(ch[j]==a[i]) {
                    char chh='a'+j;
                    ans.push_back(chh);
                    ch[j]++;
                    break;
                }
            }
        }
        for(char p:ans) cout<<p;
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
