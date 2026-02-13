#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>vec;
    for(int i=1; vec.size()<=1000; i++) {
        if(i%3!=0 && i%10!=3) {
            vec.push_back(i);
        }
    }

    int n;
    cin>>n;
    while(n--) {
        int x;
        cin>>x;
        cout<<vec[x-1]<<endl;
    }
    return 0;
}
