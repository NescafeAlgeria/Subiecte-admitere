#include <iostream>

using namespace std;

bool prim(int n){
    for(int d=2;d<=n/2;d++) if(n%d==0 && d!=n) return 0;
    return 1;
}

int main(){
    int n;
    cin>>n;
    for(int d=2;d<=n/2;d++){
        if(n%d==0 && prim(d)){
            int x=n/d;
            if(prim(x)) {cout<<"DA";return 0;}
        }
    }
    cout<<"NU";
    return 0;
}
