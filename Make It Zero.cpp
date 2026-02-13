#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int x;
        cin>>x;
        vector<int>vec;
        for(int i=0; i<x; i++) {
            int p;
            cin>>p;
            vec.push_back(p);
        }
        if(x%2==0) cout<<2<<endl<<"1 "<<x<<endl<<"1 "<<x<<endl;
        else cout<<4<<endl<<"1 "<<x-1<<endl<<"1 "<<x-1<<endl<<"2 "<<x<<endl<<"2 "<<x<<endl;
    }
    return 0;
}
