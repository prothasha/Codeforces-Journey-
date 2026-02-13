#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; string s; cin>>n>>s;
    int A=0,B=0,C=0;
    for(char ch:s){
        if(ch=='A') A++;
        else if(ch=='B')B++;
        else C++;
    }
    vector<int>vec1;
    vector<char>vec2;
    for(int i=0;i<s.size();i++){
        if(A>n&&s[i]=='A'){
            if(B<n){
                vec1.push_back(i+1);
                vec2.push_back('B');
                A--;B++;
                s[i]='B';
            }
            else if(C<n){
                vec1.push_back(i+1);
                vec2.push_back('C');
                A--;C++;
                s[i]='C';
            }
        }
        else if(B>n&&s[i]=='B'){
            if(A<n){
                vec1.push_back(i+1);
                vec2.push_back('A');
                B--;A++;s[i]='A';
            }
            else if(C<n){
                vec1.push_back(i+1);
                vec2.push_back('C');
                B--;C++;
                s[i]='C';
            }
        }
        else if(C>n&&s[i]=='C'){
            if(A<n){
                vec1.push_back(i+1);
                vec2.push_back('A');
                C--;A++;s[i]='A';
            }
            else if(B<n){
                vec1.push_back(i+1);
                vec2.push_back('B');
                C--;B++;
                s[i]='B';
            }
        }
    }
    cout<<vec1.size()<<endl;
    for(int i=0;i<vec1.size();i++) cout<<vec1[i]<<" "<<vec2[i]<<endl;
}
