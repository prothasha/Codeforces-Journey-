#include<bits/stdc++.h>
using namespace std;
int main() {
    string w;
    cin>>w;
    for(int i=0; i<w.size(); i++) {
        if(w[i]=='W') {
            if(w[i+1]=='U' && w[i+2]=='B') {
                if(i==0) i+=2;
                else {
                    i+=2;
                    cout<<" ";
                }
            }
            else cout<<w[i];
        }
        else cout<<w[i];
    }
}
