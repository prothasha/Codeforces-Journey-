#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a=0, b=0, c=0, min1;
    cin>>n;
    vector<int>vec, one, two, three;
    while(n--) {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    for(int i=0; i<vec.size(); i++) {
        if(vec[i]==1) {
            a++;
            one.push_back(i+1);
        }
        else if(vec[i]==2) {
            b++;
            two.push_back(i+1);
        }
        else if(vec[i]==3) {
            c++;
            three.push_back(i+1);
        }
    }
    min1=min(min(a, b), c);
    cout<<min1<<endl;
    for(int i=0; i<min1; i++) {
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
    }
    return 0;
}
