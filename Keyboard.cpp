#include<bits/stdc++.h>
using namespace std;
int main() {
    char x; cin>>x;
    string s; cin>>s;
    char arr[30]={'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};
    for(int i=0; i<s.size(); i++) {
        for(int j=0; j<30; j++) {
            if(s[i]==arr[j]) {
                if(x=='R') cout<<arr[j-1];
                else cout<<arr[j+1];
                break;
            }
        }
    }
    return 0;
}
