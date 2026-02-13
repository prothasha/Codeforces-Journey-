#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        char mat[3][3];
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                cin>>mat[i][j];
            }
        }
        int a=0, b=0, c=0;
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                if(mat[i][j]=='A') a++;
                else if(mat[i][j]=='B') b++;
                else if(mat[i][j]=='C') c++;
            }
        }
        if(a!=3) cout<<"A"<<endl;
        else if(b!=3) cout<<"B"<<endl;
        else if(c!=3) cout<<"C"<<endl;
    }
}
