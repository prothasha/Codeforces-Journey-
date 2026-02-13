#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, X; cin>>n>>X;
        vector<int>vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];
        sort(vec.begin(), vec.end());
        long long s=0, ans=0;
        int r=0, i=0, j=n-1;
        vector<int>vec2;
        while(i<=j){
            int rem=s%X;
            if(rem+vec[i]<X){
                s+=vec[i];
                int L=s/X;
                if(L>r) ans+=vec[i];
                r=L;
                vec2.push_back(vec[i]);
                i++;
            }
            else{
                s+=vec[j];
                int L=s/X;
                if(L>r) ans+=vec[j];
                r=L;
                vec2.push_back(vec[j]);
                j--;
            }
        }
        cout<<ans<<endl;
        for(int k=0; k<vec2.size(); k++){
            if(k) cout<<" ";
            cout<<vec2[k];
        }
        cout<<endl;
    }
    return 0;
}
