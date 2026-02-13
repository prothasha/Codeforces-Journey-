#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string w; cin>>w;

        int c=0;
        for(int i=0; i<n; i++){
            if(w[n-1]!=w[i]) c++;
        }
        cout<<c<<endl;
    }
}
