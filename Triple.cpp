#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        map<int, int>freq;
        for(int i=0; i<n; i++) {
            int x;
            cin>>x;
            freq[x]++;
        }
        vector<int>vec;
        int co=0;
        for(auto j:freq) {
            if(j.second>=3) {
                vec.push_back(j.first);
                co++;
            }
        }
        if(vec.size()==0) cout<<"-1"<<endl;
        else {
            int max1=vec[0];
            for(int i=1; i<vec.size(); i++) {
                if(vec[i]>max1) {
                    max1=vec[i];
                }
            }
            cout<<max1<<endl;
        }
    }
}

