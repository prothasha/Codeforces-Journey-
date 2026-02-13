#include <iostream>
using namespace std;

int main() {
    int n, s=0;
    cin>>n;
    int l[]= {4, 7, 47, 74, 44, 77, 444, 447, 474, 744, 777};
    for (int i=0; i<11; i++) {
        if (n%l[i]==0) {
            cout<<"YES";
            return 0;
        }
    }
    string p=to_string(n);
    for(int i=0; i<p.length(); i++) {
        if(p[i]=='4' || p[i]=='7') {
            s++;
        }
        else {
            cout<<"NO";
            return 0;
        }
    }
    if(s==p.length()) cout<<"YES";
    return 0;
}
