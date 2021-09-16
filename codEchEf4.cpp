#include<iostream>
using namespace std;
int main(){
    int a;
    int i=0;
    cin >> a;
    char b[4];  
    for(a>=1000;a <10000;){
        a++;
        sprintf(b,"%d",a);
        if(b[0]!=b[1] && b[0]!=b[2] && b[0]!=b[3] && b[1]!=b[2] && b[1]!=b[3] && b[2]!=b[3] ){
            break;

   
      
   
        }
    }
    cout<<a;
  

    return 0;
}
