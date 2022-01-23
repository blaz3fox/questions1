#include<iostream>
using namespace std;

int main(){
    int a,f1=0,f2=0,f3=0;
    cin >> a;
    int b[a][3];
    for(int i=0;i<a; i++){
        for(int j=0;j<3; j++){
            cin >> b[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<a; j++){
            if (i==0)
            {
                if(b[j][i]==1){
                    f1++;
                }
                
            }
            else if(i==1){
                if(b[j][i]==1){
                    f2++;
                }
            }
            else if(i==2){
                if(b[j][i]==1){
                    f3++;
                }
            }
            
        }
    }
    cout<<(f1+f2+f3)/3;

}