#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;

    int arr[100];
    int j=0;
    int l=s.length();
    for (int i=0; i<l; i+=2) {
        arr[j]=s[i]-'0';
        j++;
    }
    for(int step=0; step<j; step++) {
        for(int k=0; k<j-step-1; k++) {
            if (arr[k]>arr[k+1]){
                swap(arr[k], arr[k+1]);
            }
        }
    }
    for (int k=0; k<j; k++) {
        if(k!=j-1) {
            cout<<arr[k]<<"+";
        }
        else {
            cout<<arr[k];
        }
    }

    return 0;
}
