#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int s=0;
    if(a==b || a==c|| a==d) s++;
    if(b==c || b==d) s++;
    if(c==d) s++;
    cout<<s;
}
