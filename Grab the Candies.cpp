#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>vec;
        for(int i=0; i<n; i++) {
            int x;
            cin>>x;
            vec.push_back(x);
        }
        int M=0, B=0;
        for(int i=0; i<n; i++) {
            if(vec[i]%2==0) M+=vec[i];
            else B+=vec[i];
        }
        if(M>B) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}

