#include <iostream>
using namespace std;
int main(){

    int c=0;
    string a;
    cin >> a;
    cout<<a.size();
    for (int i = 0;i < a.size();i++){
        if (a[i] == 'H' || a[i] == 'Q'|| a[i] == '+'|| a[i] == '9'){
            c =+1;
            break;
        }
    }  
    
    if( c > 0){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}