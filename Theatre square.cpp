#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main() {
    long long n, m, a;
    cin>>n>>m>>a;
    long long tiles_length=ceil((double)n/a);
    long long tiles_width=ceil((double)m/a);
    cout<<tiles_length*tiles_width<<endl;
}
