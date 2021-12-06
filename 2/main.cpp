#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere.in");

int main(){
    int n;
    fin>>n;
    int v[n+1];
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    int m=0,c=0;
    for(int i=1;i<=n;i++){
        if(v[i]>m){
            m=v[i];
            c=i;
        }
    }
    cout<<m<<' ';
    v[c]=0;
    m=0;
    for(int i=1;i<=n;i++){
        if(v[i]>m) m=v[i];
    }
    cout<<m;
    return 0;
}
