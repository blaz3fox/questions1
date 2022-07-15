#include <iostream>
using namespace std;
/*float taylor(float x, float n){
    static float p =1,f=1;
    float r;
    if(n==0){
        return 1;

    }
    else{
        r=taylor(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
int main(){
    float a,b,c;
    cin >> a >> b ;
    c=taylor(a,b);
    printf("%lf",c);
}
alternative method 

float e(float n ,float n){
    int s=1;
    for(n>0;n--){
        s=1(x/n)*s;
    }
    return s;
}
*/
float e(float x,float n){
    static float s=1;
    if(n==0){
        return s;
    }
    else{
        s=1+x*s/n;
        return e(x,n-1);
    }
    
    
}
int main(){
    printf("%lf \n",e(1,10));
    return 0;
}