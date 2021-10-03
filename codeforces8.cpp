#include<iostream> 
#include<string> 
#include<cstring>
#include<cctype>
using namespace std;
int main(){
    long long  a;
    cin >>a;
    int c=0;
    while(a != 0 ){
        if(a%10==4||a%10==7){
            c=c+1;
        }
        a=a/10;
    }
    if(c==4||c==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";

    }
   
     
    return 0;
}
