#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int max1=0, c=0;
    vector<int>p;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        p.push_back(x);
    }
    for(int i=0; i<n-1; i++) {
        if(p[i]<=p[i+1]) c++;
        else {
            max1=max(c, max1);
            c=0;
        }
        max1=max(c, max1);
    }
    cout<<max1+1;;
}
