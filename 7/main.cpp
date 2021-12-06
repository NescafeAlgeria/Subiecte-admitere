#include <iostream>

using namespace std;

int main(){
    char a[256];

    cin>>a;
    int m=1;
    while(a[m]!=0) m++;
    m++;
    for(int i=0;i<m;i++){
        bool f=1;
        for(int j=i+1;j<=m;j++){
            if(a[i]==a[j]) f=0;
        }
        if(f) {cout<<a[i];return 0;}
    }

    return 0;
}
