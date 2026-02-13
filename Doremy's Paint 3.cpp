#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int x; cin>>x;
        map<int, int>freq;
        for(int i=0; i<x; i++) {
            int x;
            cin>>x;
            freq[x]++;
        }
        if(freq.size()==1) cout<<"YES"<<endl;
        else if(freq.size()==2) {
            vector<int>vec2;
            for(auto i:freq) vec2.push_back(i.second);
            if(abs(vec2[0]-vec2[1])<=1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(freq.size()>=3) cout<<"NO"<<endl;
    }
    return 0;
}

