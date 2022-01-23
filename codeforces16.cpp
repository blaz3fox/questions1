#include<iostream>
using namespace std;
int b,c,d,e,f=-1,g=-1,h=-1,j=-1;
int main(){
   int a[4];
   for(int i=0;i<4;i++){
       cin >> a[i];
   }
   b=a[0];
   c=a[1];
   d=a[2];
   e=a[3];
   //if(a[0]==a[2])
   for(int i=0; i<4;i++){
       if(a[i]==b){
           f=f+1;
       }
       else if(a[i]==c){
           g=g+1;
       }
       else if(a[i]==d){
           h=h+1;

       }
       else if(a[i]==e){
           j=j+1;
       }
   }   
   if(f==-1 ){
       f=f+1;
       
   }    
   if(g==-1){
       g=g+1;
   }    
   if(h==-1){
       h=h+1;
   }
   if(j==-1){
       j=j+1;

   }        
           
 




cout<<f+g+h+j;


}