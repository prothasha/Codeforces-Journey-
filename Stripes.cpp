#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--) {
        vector<string>mat(8);
        for(int i=0; i<8; i++) cin>>mat[i];
        int i;
        for(i=0; i<8; i++) {
            if(mat[i]=="RRRRRRRR") {
                cout<<"R"<<endl;
                break;
            }
        }
        if(i==8) cout<<"B"<<endl;
    }
}

