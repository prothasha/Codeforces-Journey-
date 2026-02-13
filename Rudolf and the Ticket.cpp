#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a, b, p;
        cin>>a>>b>>p;
        vector<int>vec1, vec2, pppp;
        for(int i=0; i<a; i++) {
            int x;
            cin>>x;
            vec1.push_back(x);
        }
        for(int j=0; j<b; j++) {
            int x;
            cin>>x;
            vec2.push_back(x);
        }
        for(int i=0; i<a; i++) {
            for(int j=0; j<b; j++) {
                int sum=vec1[i]+vec2[j];
                if(sum<=p) pppp.push_back(sum);
            }
        }
        cout<<pppp.size()<<endl;
    }
}
