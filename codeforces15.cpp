#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int a[9999];
    int c=0;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='+'){
	        continue;
	    }else{
	        a[c++]=s[i]-'0';
	    }
	}
	sort(a,a+c);
	for(int i=0;i<c; i++){
		cout<<a[i];
		if(i==c-1){
			break;
		}
		else{
			cout<<"+";
		}

	}
	return 0;
}