#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int main(){
    int a;
    cin >> a;
    string c,e;
  
    vector<string>b;
    for(int i=0;i<a;i++){
        cin >> c;
        b.push_back(c);
        

    }
    for (auto it = b.begin(); it != b.end(); it++){
        e=*it;
        if(e.size()>10){
            cout<<e[0]+to_string(e.size()-2)+e[e.size()-1]<<"\n";
        }
        else{
            cout<<e<<"\n";
        }
    }
        

        



    
}