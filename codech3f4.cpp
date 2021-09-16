#include<iostream>
#include<cstring>
using namespace std ;
int main(){
    int i;
    string l;
    cin >> l;
    int j = l.length();
    for(i=0; i<j;){
       
        if(l[i]== '-' && l[i+1]== '.' ){
            cout << "1";
            i=i+2;
        }
        else if(l[i]== '-'&& l[i+1]=='-'){
            cout << "2";
            i=i+2;
        }
        else{
            cout << "0";
            i=i+1;
        }
    }
    return 0;
}
