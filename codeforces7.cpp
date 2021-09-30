#include<iostream> 
#include<string> 
#include<cstring>
#include<cctype>  //for using functions likeisupper islower
 using namespace std;
 int main(){
     string str;
     cin >> str;
     str[0]=toupper(str[0]);
    
     cout<<str;
     return 0;

     
    
 }