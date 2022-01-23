#include<iostream>
#include<cstdio>

int main(){
    int a=0,b=0,c=0,n,e;
    scanf("%d",&n);
    int l[n];
    for(int i=0;i<n; i++){
        scanf("%d",&l[i]);

    }
    a=l[0];
    b=l[0];
    for(int i=1;i<n;i++){
        if(l[i]>b){
            b=l[i];
            c++;
        }
        else if(l[i]<a){
            a=l[i];
            c++;
        }
    }
    printf("%d",c);
}
