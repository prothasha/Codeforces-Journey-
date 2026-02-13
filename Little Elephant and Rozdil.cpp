#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    map<int, int>m;
    for(int i=0; i<n; i++) m[vec[i]]++;
    int min1=INT_MAX, ind=-1;
    for(int i=0; i<n; i++) {
        if(vec[i]<min1) {
            min1=vec[i];
            ind=i+1;
        }
    }
    if(m[min1]>1) cout<<"Still Rozdil";
    else cout<<ind;
}
