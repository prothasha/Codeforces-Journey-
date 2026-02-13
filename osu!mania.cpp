#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int r;
        cin>>r;
        char mat[r][4];
        vector<int>vec;
        for(int i=0; i<r; i++) {
            for(int j=0; j<4; j++) {
                cin>>mat[i][j];
            }
        }
        for(int i=0; i<r; i++) {
            for(int j=0; j<4; j++) {
                if(mat[i][j]=='#') {
                    vec.push_back(j+1);
                }
            }
        }
        reverse(vec.begin(), vec.end());
        for(int k: vec) cout<<k<<" ";
        cout<<endl;
    }
    return 0;
}
