#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) {
        while (i!=n) {
            if(i%2!=0) {
                cout<< "I hate ";
                cout<<"that ";
                break;
            }
            else if(i%2==0) {
                cout<< "I love ";
                cout<<"that ";
                break;
            }
        }
        while (i==n) {
            if(i%2!=0) {
                cout<< "I hate ";
                cout<<"it ";
                break;
            }
            else if(i%2==0) {
                cout<< "I love ";
                cout<<"it ";
                break;
            }
        }
    }
    return 0;
}
