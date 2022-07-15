#include <iostream>
using namespace std;
//int x=0; //global variable will  provide us with the same answer
int fun(int n){

    static int x=0; //static variable instace s created only once and is incremented per call given n>0so at the end it will be 5
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main(){
    int r;
    r=fun(5);
    printf("%d\n", r);
    return 0;

}