#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        string w;
        cin>>w;
        int s=w.size();
        if(s%2!=0) cout<<"NO"<<endl;
        else {
            int c=0;
            for(int i=0; i<s/2; i++) {
                if(w[i]==w[i+(s/2)]) c++;
            }
            if(c==s/2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}

