#include <iostream>


using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];

        }
    }

    for(int j=1;j<=m;j++){
        int m=10000;
        for(int i=1;i<=n;i++){
            if(m > a[i][j]) m=a[i][j];
        }
        cout<<m<<' ';
    }

    return 0;
}
