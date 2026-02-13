#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int t;
        cin>>t;
        string w;
        cin>>w;
        vector<char> vec(w.begin(), w.end());
        int i=0, j=vec.size()-1;
        while(i<j) {
            if(vec[i]!=vec[j]) {
                vec.erase(vec.begin());
                vec.pop_back();
                i=0, j=vec.size()-1;
            }
            else if(vec[i]==vec[j]) {
                break;
            }
        }
        cout<<vec.size()<<endl;
    }
    return 0;
}
