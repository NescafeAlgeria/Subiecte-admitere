#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int x=(a<b)*a+(b<a)*b;
    for(int i=2;i<=x/2;i++){
        while(a%i==0){
            if(b%i==0){
                a/=i;
                b/=i;
            }
            else break;
        }
    }
    cout<<a<<' '<<b;
    return 0;
}
