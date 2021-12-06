#include <fstream>

using namespace std;

ifstream cin("numere.in");
ofstream cout("numere.out");

int main(){
    int n,m;
    cin>>n>>m;
    int a[n+1],b[m+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=m;i++){
        cin>>b[i];
    }
    int i=1,j=1,k=1;
    int c[n+m+1];
    while(i<=n && j<=m){
        if(a[i] < b[j])
            c[k++]=a[i++];
        else c[k++]=b[j++];
    }
    while(i<=n) c[k++]=a[i++];
    while(j<=m) c[k++]=b[j++];

    for(int x=1;x<=n+m;x++){
        cout<<c[x]<<' ';
    }
    return 0;
}
