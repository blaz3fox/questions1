#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    string str2;
    cin >> str>>str2;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
    if(str == str2){
        cout<<"0";

    }
    else  if(str<str2){
        cout<<"-1";
    }
    else{
        cout<<"1";
    }
}