#include<iostream>
using namespace std;
int main(){
    int g=0;
    int k,l,m,n,d;
    scanf("%d %d %d %d %d" ,&k,&l,&m,&n,&d);
    for(int i=1;i<=d;i++){
        if(i%k==0 || i%l==0 ||i%m==0 || i%n==0){
            g++;
        }


    }
       
       
      
    printf("%d",g);
    


}
