#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int a, c;
        cin>>a;
        vector<int>vec1, vec2;
        for(int i=0; i<a; i++) {
            int x;
            cin>>x;
            vec1.push_back(x);
            vec2.push_back(x);
        }
        int maxsum=0;
        for(int i=0; i<a; i++) {
            vec1=vec2;
            int p=vec1[i];
            p=p+1;
            c=p;
            vec1.erase(vec1.begin()+i);
            for(int j=0; j<a-1; j++) {
                c=c*vec1[j];
            }
            if(c>maxsum) maxsum=c;
        }
        cout<<maxsum<<endl;
    }
    return 0;
}
