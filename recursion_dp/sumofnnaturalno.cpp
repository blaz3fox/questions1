#include<iostream>//time complexity O(n)space=n+1
using namespace std;
int sum(int n){
    if(n==0) {
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}
int main(){
    int x,y;
    cin>>x;
    y=sum(x);
    printf("%d",y);
    
}
