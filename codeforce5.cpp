#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
#define INF 0x7fffffff

int a[4][4], b[4][4];

int main()
{
    #ifdef sxk
        freopen("in.txt","r",stdin);
    #endif
    int n;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                scanf("%d", &a[i][j]);
        memset(b,0,sizeof(b));
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++){
                if(a[i][j]){
                b[i][j] += a[i][j];
                if(i > 0) b[i-1][j] += a[i][j];
                if(i < 2) b[i+1][j] += a[i][j];
                if(j > 0) b[i][j-1] += a[i][j];
                if(j < 2) b[i][j+1] += a[i][j];
                }
            }
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("%d", b[i][j]&1^1);
            }
            printf("\n");
    }
    return 0;
}

 