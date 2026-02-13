#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        char mat[11][11];
        for(int i=1; i<=10; i++) {
            for(int j=1; j<=10; j++) {
                cin>>mat[i][j];
            }
        }
        int m=0;
        for(int i=1; i<=10; i++) {
            for(int j=1; j<=10; j++) {
                if(mat[i][j]=='X') {
                    int p;
                    if(i==1 || i==10 || j==1 || j==10) {
                        p=1;
                    }
                    else if(i==2 || i==9 || j==2 || j==9) {
                        p=2;
                    }
                    else if(i==3 || i==8 || j==3 || j==8) {
                        p=3;
                    }
                    else if(i==4 || i==7 || j==4 || j==7) {
                        p=4;
                    }
                    else {
                        p=5;
                    }
                    m+=p;
                }
            }
        }
        cout<<m<<endl;
    }

    return 0;
}
