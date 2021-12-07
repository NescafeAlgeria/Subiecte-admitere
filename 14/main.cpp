#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("nume.in");
ofstream fout("nume.out");

int main(){
    char v[101][21]={0};

    int ct=0;

    char temp[21];

    while(fin>>temp){
        strcpy(v[ct++],temp);
    }

    for(int i=0; i < ct-1 ;i++){
        for(int j=i+1; j < ct; j++){
            if(strcmp(v[i],v[j])>0){
                strcpy(temp, v[i]);
                strcpy(v[i],v[j]);
                strcpy(v[j],temp);
            }
        }
    }

    for(int i=0;i<ct;i++){
        fout<<v[i]<<'\n';
    }


    return 0;
}
