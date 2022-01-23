#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int nooftoasts,slices;
    nooftoasts=floor((k*l)/(nl*n));
    slices=floor((c*d)/n);
    p=floor(p/(np*n));
    int g = min(nooftoasts,slices);
    cout<<min(g,p);

}