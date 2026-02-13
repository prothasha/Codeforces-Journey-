#include<bits/stdc++.h>
using namespace std;
int main() {
    string a; int k; cin>>a>>k;
    int n=a.size();
    int i=0;
    while(i<n && k>0) {
        int p=i;
        int j=i+1;
        while(j<n && j-i<=k) {
            if(a[j]>a[p]) p=j;
            j++;
        }
        int d=p-i;
        while(p>i) {
            swap(a[p], a[p-1]);
            p--;
        }
        k-=d;
        i++;
    }
    cout<<a<<endl;
}
