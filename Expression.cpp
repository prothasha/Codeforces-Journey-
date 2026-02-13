#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    cin>>a>>b>>c;
    int p=a+b*c;
    int q=a*(b+c);
    int r=a*b*c;
    int s=(a+b)*c;
    int t=a+b+c;
    int m=max(max(max(max(p,q),r),s),t);
    cout<<m;;
    return 0;
}
