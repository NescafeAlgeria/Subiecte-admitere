#include <fstream>
#include <iostream>

using namespace std;

ifstream fin("bac.in");

int main(){
    char x;
    int ct=0;
    while(fin>>x){
        ct+=((0x208222>>(x&0x1f))&1);
    }
    cout<<ct;
    return 0;
}
