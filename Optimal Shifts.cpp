#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int c=0, p=0;
        vector<int>vec;
        for(int i=0; i<n; i++){
            if(s[i]=='0') p++;
            else{
                if(p>0){
                    vec.push_back(p);
                    c=max(c,p);
                    p=0;
                }
            }
        }
        if(p>0){
            vec.push_back(p);
            c=max(c, p);
        }
        if(!vec.empty() && s.front()=='0' && s.back()=='0'){
            int f=0,l=0;
            for(int i=0; i<n && s[i]=='0'; i++) f++;
            for(int i=n-1; i>=0 && s[i]=='0'; i--) l++;
            c=max(c, f+l);
        }
        cout<<c<<endl;
    }
}
