#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int d=2;d<=n;d++){
        int p=0;
        while(n%d==0){
            p++;
            n/=d;
        }
        if(p) cout<<d<<' '<<p<<'\n';
    }
    return 0;
}
