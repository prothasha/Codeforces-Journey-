#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    sort(vec.begin(), vec.end());
    for(int i=0; i<n-2; i++) {
        int a=vec[i];
        int b=vec[i+1];
        int c=vec[i+2];
        if(a+b>c && a+c>b && b+c>a) {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
