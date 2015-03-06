#include "stdio.h"
#include "stdlib.h"

double ary[41] = {0, 1, 5, 11};

double count(int n){
    if (n==1) return (double)1;
    if (n==2) return (double)5;
    if (n==3) return (double)11;
    
    if (ary[n] == 0)
        ary[n] = (double)1+count(n-1)+(double)5+count(n-2)+(double)11+count(n-3);
    
    return ary[n];
}

int main(){
    int t, n, i;
    scanf("%d", &t);
    for (i=0; i<t; i++) {
        scanf("%d", &n);
        printf("%.0f\n", count(n));
    }
    return 0;
}
