#include <iostream>//O(n)
using namespace std;
int expo(int m,int n){
    if(n==0) {
        return 1;

    }
    if(n%2==0){
        return expo(m*m,n/2);
    }
    else{
        return expo(m*m,(n-1)/2)*m;
    }
}
int main(){
    int x,y,z;
    cin>>x>>y;
    z=expo(x,y);
    printf("%d",z);
}