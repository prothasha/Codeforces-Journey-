#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        string w;
        cin>>w;
        int l=w.size();
        vector<char>vec;
        for(int i=0; i<l; i++) {
            vec.push_back(w[i]);
        }
        vec.pop_back();
        vec.pop_back();
        vec.push_back('i');
        for(char p:vec) cout<<p;
        cout<<endl;
    }
}
