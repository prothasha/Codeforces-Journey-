#include <iostream>
using namespace std;

int main() {
    int n, s=0;
    cin>>n;
    int m=0;
    while (n--) {
        int x, y;
        cin>>x>>y;
        int a=y-x;
        s=a+s;
        m=max(m, s);
    }
    cout<<m;
    return 0;
}
