#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>vec(n, 0), ans;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int x; cin>>x;
            if(x==1) vec[i]=1;
            else if(x==2) vec[j]=1;
            else if(x==3) vec[i]=vec[j]=1;
        }
    }
    for(int i=0; i<n; i++) if(vec[i]==0) ans.push_back(i+1);
    cout<<ans.size()<<endl;
    for(int i: ans) cout<<i<<" ";
}
