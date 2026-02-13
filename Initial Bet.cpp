#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>vec(5);
    for(int i=0; i<5; i++) cin>>vec[i];
    int s=0;
    for(int i=0; i<5; i++) s+=vec[i];
    if(s%5==0 && s!=0) cout<<s/5;
    else cout<<-1;
}
