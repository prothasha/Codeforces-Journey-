#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;

    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];

    int c=0, b1=0, b2=0;
    for(int i=0;i<n;i++){
        if(i%3==0) c+=vec[i];
        else if(i%3==1) b1+=vec[i];
        else b2+=vec[i];
    }

    if(c>=b1 && c>=b2) cout<<"chest"<<endl;
    else if(b1>=c && b1>=b2) cout<<"biceps"<<endl;
    else cout<<"back"<<endl;
}
