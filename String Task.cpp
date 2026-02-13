#include<bits/stdc++.h>
using namespace std;
int main() {
    string w;
    cin>>w;
    int l=w.length();
    for(int i=0; i<l; i++) {
        char ch=tolower(w[i]);
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y' || ch=='Y' || ch==' A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
            continue;
        }
        else {

            cout<<"."<<ch;
        }
    }

    return 0;
}
