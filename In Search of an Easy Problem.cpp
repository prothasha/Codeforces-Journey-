#include <iostream>
using namespace std;

int main() {
    int n, s=0;
    cin>>n;
    while (n--) {
        int x;
        cin>>x;
        if(x==1) {
            s++;
        }
        else if(x==0) {
            continue;
        }
    }
    if(s>0) cout<<"HARD";
    else cout<<"EASY";
    return 0;
}
