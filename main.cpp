#include <fstream>

using namespace std;
ifstream cin("cifre.in");
ofstream cout("cifre.out");
          
int main(){
    int n,a[1001]={0};

    cin>>n;
    int c=1;
    while(n!=0){
        a[c++]=n%10;
        n/=10;
    }
    for(int i=1;i<c;i++){
        for(int j=i+1;j<=c;j++){
            if(a[i]<a[j]){
                int aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }

    for(int i=1;i<c;i++){
        cout<<a[i];
    }

}
