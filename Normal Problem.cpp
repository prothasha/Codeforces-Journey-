#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        string s;
        cin>>s;
        for(int i=s.size(); i>=0; i--) {
            if(s[i]=='q') cout<<'p';
            else if(s[i]=='p') cout<<'q';
            else if(s[i]=='w') cout<<'w';
        }
        cout<<endl;
    }
}
