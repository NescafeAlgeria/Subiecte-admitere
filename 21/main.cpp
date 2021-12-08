#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
ifstream fin("cuvant.in");

int main(){
    char a[100];
    fin>>a;
    int s=strlen(a);
    char c[100];
    for(int i=0;i<s;i++){
        c[i]=a[s-i-1];
    }
    c[s]='\0';
    if(strcmp(a,c)==0) cout<<"DA";
    else cout<<"NU";



    return 0;
}
