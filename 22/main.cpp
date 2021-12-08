#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("numere.in");

int main(){
    int n;
    fin>>n;
    int a,poz=1,l=0,nr;
    for(int i=1;i<=n;i++){
        fin>>a;
        if(a==nr) l++;
        else{
            poz=i;
            nr=a;
            l=1;
        }
    }
    cout<< poz<< ' '<<l;
    return 0;
}
