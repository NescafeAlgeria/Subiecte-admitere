#include <iostream>
#include <fstream>

using namespace std;
ofstream fout("palin.txt");

int ogl(int n){
    int x=0;
    while(n!=0){
        x = x*10 + n%10;
        n /= 10;
    }
    return x;
}

int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(i==ogl(i)) fout<<i<<' ';
    }
    return 0;
}
