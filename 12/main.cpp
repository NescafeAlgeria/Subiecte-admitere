#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int x=1;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        x*=a;
    }
    int p,k=0;
    cin>>p;

    while(x%p==0){
        k++;
        x/=p;
    }


    cout<<k;
    return 0;
}
