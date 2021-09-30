#include<iostream> 
#include<cstring>
#include<cctype>  //for using functions likeisupper islower

using namespace std;

int main(){
    int b = 0;
    int c = 0;
    char a[100],u,l;
    cin >> a;
    for(int i=0; i<strlen(a); i++){
        if(isupper(a[i])){
            b=b+1;
        }
        else {
            c=c+1;
        }
    
    }
    if(c>b||c==b){
        for(int i=0; i<strlen(a); i++){
        l=tolower(a[i]);
        cout<<l;
        }
    }

    else{
        for(int i=0; i<strlen(a); i++){
        u=toupper(a[i]);
        cout<<u;
        }
    }
    


}
