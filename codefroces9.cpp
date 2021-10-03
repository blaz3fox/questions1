#include<iostream> 
#include<string> 
#include<cstring>
#include<cctype>
using namespace std;
int main(){
    int i,c=0;
    cin >> i;
    char a[50];
    cin >> a;
    for (int j=0; j<i; j++){
        while(a[j]== a[j+1]){
            c++; 
            j++;


        }
    }
    cout<<c;
    return 0;   
}
