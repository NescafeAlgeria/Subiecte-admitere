#include <fstream>

using namespace std;
ifstream cin("numere.in");
ofstream cout("numere.out");

int main(){
    int n;
    while(cin>>n && n!=0){
        int m=0;
        while(n){
            if(n%10>m) m=n%10;
            n/=10;
        }
        cout<<m<<' ';
    }
    return 0;
}
