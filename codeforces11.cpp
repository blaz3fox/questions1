#include<iostream>
#include <stdio.h>
#include<vector>
using namespace std;
int main(){
    float a;
    float e,x=0,y;
    vector<float>b;
    scanf("%f",&a);
    for(int i=0; i<a; i++){
        cin>>e;
        b.push_back(e);
    }
    for (auto i = b.begin(); i != b.end(); ++i){
        x=*i +x;
    }
    x=x/100;
    y=(x/a)*100;
    printf("%f",y);



}
    
   

   






