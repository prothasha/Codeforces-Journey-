#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>vec(n);
        int c=0;
        for(int i=0; i<n; i++){
            cin>>vec[i];
            if(vec[i]==2) c++;
        }
        if(c%2!=0){
            cout<<-1<<endl;
            continue;
        }
        int co=0;
        for(int i=0;i<n;i++){
            if(vec[i]==2)co++;
            if(co==c/2){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
