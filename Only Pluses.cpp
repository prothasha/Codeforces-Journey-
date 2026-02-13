#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int a, b, c;
        cin>>a>>b>>c;
        for(int i=0; i<5; i++) {
            if(a<=b && a<=c) a++;
            else if(b<=a && b<=c) b++;
            else c++;
        }
        int m=a*b*c;
        cout<<m<<endl;
    }
    return 0;
}

