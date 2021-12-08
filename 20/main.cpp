#include <iostream>

using namespace std;

int main(){
    int n,ct=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            cout<<2*(ct++)<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
