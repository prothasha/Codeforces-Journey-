#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    vector<pair<int, string>>v={
        {0,"zero"}, {1,"one"}, {2,"two"}, {3,"three"}, {4,"four"},
        {5,"five"}, {6,"six"}, {7,"seven"}, {8,"eight"}, {9,"nine"},
        {10,"ten"}, {11,"eleven"}, {12,"twelve"}, {13,"thirteen"},
        {14,"fourteen"}, {15,"fifteen"}, {16,"sixteen"}, {17,"seventeen"},
        {18,"eighteen"}, {19,"nineteen"}, {20,"twenty"}, {30,"thirty"},
        {40,"forty"}, {50,"fifty"}, {60,"sixty"}, {70,"seventy"},
        {80,"eighty"}, {90,"ninety"}};
    for(auto &p:v){
        if(p.first==n) {
            cout<<p.second<<endl;
            return 0;
        }
    }
    int x=n%10, y=(n/10)*10;
    for(auto &p:v){
        if(p.first==y) {
            cout<<p.second<<"-";
        }
    }
    for(auto &p:v){
        if(p.first==x) {
            cout<<p.second;
        }
    }
}

