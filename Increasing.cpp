#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int t;
        cin>>t;
        vector<int>vec;
        for(int i=0; i<t; i++) {
            int p;
            cin>>p;
            vec.push_back(p);
        }
        int c=0;
        sort(vec.begin(), vec.end());
        for(int i=0; i<t-1; i++) {
            if(vec[i]==vec[i+1]) {
                cout<<"No"<<endl;
                break;
            }
            else c++;
        }
        if(c==vec.size()-1) cout<<"Yes"<<endl;
    }
}
