#include "stdio.h"

double ary[41] = {0, 1, 5, 11};

double count(unsigned int n){
    if (ary[n] == 0)
        ary[n] = count(n-1) + 4*count(n-2) + 2*count(n-3);
    
    return ary[n];
}

int main(){
    unsigned int t, n, i;
    
    scanf("%u", &t);
    for (i=0; i<t; i++) {
        scanf("%u", &n);
        printf("%.0f\n", count(n));
    }
    return 0;
}
