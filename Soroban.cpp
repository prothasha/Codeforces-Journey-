#include <bits/stdc++.h>
using namespace std;
int main(){
    string n; cin>>n;
    for(int i=n.size()-1; i>=0; --i){
        int d=n[i]-'0';

        if(d<5)cout<<"O-|";
        else cout<<"-O|";

        if(d%5==0)cout<<"-OOOO";
        else if(d%5==1)cout<<"O-OOO";
        else if(d%5==2)cout<<"OO-OO";
        else if(d%5==3)cout<<"OOO-O";
        else cout<<"OOOO-";
        cout<<endl;
    }
}
