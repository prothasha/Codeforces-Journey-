#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3][3], mat[3][3];
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {

            int c = a[i][j];
            if(i>0) c+=a[i-1][j];
            if(i<2) c+=a[i+1][j];
            if(j>0) c+=a[i][j-1];
            if(j<2) c+=a[i][j+1];

            if(c%2==0) mat[i][j]=1;
            else mat[i][j]=0;
        }
    }
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout<<mat[i][j];
        }
        cout<<endl;
    }
}

