#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin>>n>>m;
    vector<string>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(vec[i][j]=='-') continue;
            else {
                if((i+j)%2==0) vec[i][j]='B';
                else vec[i][j]='W';
            }
        }
    }
    for(int i=0; i<n; i++) cout<<vec[i]<<endl;
}

