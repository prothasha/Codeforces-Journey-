#include <iostream>
using namespace std;

int main() {
    int n, s=0;
    cin>>n;
    while (n--) {
        int x, y;
        cin>>x>>y;
        int p=y-x;
        if(p>=2) {
            s++;
        }
        else {
            continue;
        }
    }
    cout<<s;
    return 0;
}
