#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    vector<string>vec={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    long long b=1;
    while(n>5*b) {
        n=n-(5*b);
        b*=2;
    }
    cout<<vec[(n-1)/b]<<endl;
}
