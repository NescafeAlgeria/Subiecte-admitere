#include <fstream>

using namespace std;

ifstream cin("sir.in");
ofstream cout("sir.out");

int main(){
    int n;
    cin>>n;
    int v[n+2];
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    int x,i=1;
    cin>>x;
    while(v[i]<x) i++;
    for(int j=n+1;j>i;j--){
        v[j]=v[j-1];
    }
    v[i]=x;

    for(int j=1;j<=n+1;j++){
        cout<<v[j]<<' ';
    }
    return 0;
}
