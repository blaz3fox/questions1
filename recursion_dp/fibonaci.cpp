#include <iostream>
using namespace std; 
int F[10];
int f(int n){
    static int s=0;
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1){
            F[n-2]=f(n-2);
        }
        if(F[n-1]==-1){
            F[n-1]=f(n-1);
        }
        s=F[n-2]+F[n-1];
        F[n]=F[n-1]+F[n-2];
        return f(n-2)+f(n-1)+s;
    }

}

int main(){
    for(int i=0;i<10;i++){
        F[i]=-1;
    }
    printf("%d",f(5));
    return 0;
}
/*
int t[40] = {0}; 
    int fib(int n) {
        if(n == 0 ||  n == 1)
            return n; 
        
        if(t[n] != 0) 
            return t[n];
        
        
        return t[n] = fib(n - 1) + fib(n - 2); 
        
    }*///easier way similar to before usin memoizaiton 