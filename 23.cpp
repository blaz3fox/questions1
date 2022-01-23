#include<iostream>
using namespace std;

int main(){
    int i,p=0,m=0,z;
    
    cin>>i;
    string s;
    for(int j=0; j<i; j++){
        cin>>s;
       
        for(int k=0;k < s.size();k++){
            if(s[k]=='+'){
                p++;
            }
            else if(s[k]=='-'){
                m++;
            }

        }


    }

    
    p=p/2;
    m=m/2;
    //cout<<p<<m;

    cout<<p-m;

}