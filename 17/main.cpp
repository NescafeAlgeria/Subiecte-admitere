#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("matrice.in");

int main(){
    int n;
    int s=0;
    fin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a;
            fin>>a;
            if(i>j){
                s+=a;
            }
        }
    }
    cout<<s;
    return 0;
}
