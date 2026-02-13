#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int x, k; cin>>x>>k;
        vector<int>vec;
        int max1=0;
        while(x>=0) {
            int i=x;
            while(i%k==0 && i>0) i--;
            if(i==0) break;
            max1=i;
            vec.push_back(max1);
            x=x-max1;
        }
        cout<<vec.size()<<endl;
        for(int i:vec) cout<<i<<" ";
        cout<<endl;
    }
}
