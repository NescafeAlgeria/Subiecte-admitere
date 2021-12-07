#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("numere.in");

int main()
{
    int n;
    fin>>n;
    int f[100]={0};
    for(int i=1;i<=n;i++){
        int a;
        fin>>a;
        f[a]++;
    }
    int m=0,c=0;
    for(int i=1;i<=100;i++){
        if(f[i]>c){
            m=i;
            c=f[i];
        }
    }
    cout<<m;
    return 0;
}
