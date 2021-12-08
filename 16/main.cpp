#include <fstream>

using namespace std;

ifstream cin("numere.in");
ofstream cout("numere.out");

int main(){
    int n;
    cin>>n;
    int v[n+1];
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    int x;
    cin>>x;

    for(int i=1;i<=n;i++){
        while(v[i]==x){
            for(int j=i;j<=n;j++){
                v[j]=v[j+1];

            }
            n--;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<v[i]<<' ';
    }


    return 0;
}
