#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    while(n--) {
        int m;
        cin>>m;

        vector<int>p;
        int po=0;

        while (m>0) {
            int d=m%10;
            if (d!=0) {
                p.push_back(d*pow(10, po));
            }
            m/=10;
            po++;
        }

        cout<<p.size()<<endl;
        for (int i=p.size()-1; i>=0; i--) {
            cout<<p[i]<<" ";
        }
        cout<<endl;

    }

    return 0;
}
