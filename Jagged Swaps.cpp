#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int x; cin>>x;
        vector<int>vec;
        for(int i=0; i<x; i++) {
            int p; cin>>p;
            vec.push_back(p);
        }
        for(int i=0; i<x; i++) {
            if(vec[0]==1) {
                cout<<"YES"<<endl;
                break;
            }
            else {
                cout<<"NO"<<endl;
                break;
            }
        }
    }
    return 0;
}
