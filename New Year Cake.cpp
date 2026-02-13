#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long a, b; cin>>a>>b;
        int co1=0, co2=0;
        long long x=a, y=b;
        for(long long i=1; i<=max(x, y); i*=2){
            if(x>=i){
                x=x-i;
                co1++;
            }
            else break;
            swap(x,y);
        }
        x=b, y=a;
        for(long long i=1; i<=max(x, y); i*=2){
            if(x>=i){
                x=x-i;
                co2++;
            }
            else break;
            swap(x,y);
        }
        cout<<max(co1,co2)<<endl;
    }
}
