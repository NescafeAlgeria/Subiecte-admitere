#include <iostream>

using namespace std;

int cmmdc(int a,int b){
    int r;
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        if(cmmdc(n,i)==1) cout<<i<<' ';
    }
    return 0;
}
