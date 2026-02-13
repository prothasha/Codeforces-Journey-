#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    int min1=INT_MAX, max1=INT_MIN;
    for(int i=0; i<n; i++) {
        if(vec[i]<min1) min1=vec[i];
        if(vec[i]>max1) max1=vec[i];
    }
    int co=0;
    for(int i=0; i<n; i++) if(vec[i]<max1 && vec[i]>min1) co++;
    cout<<co<<endl;
}

