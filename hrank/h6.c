#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int length=0;
    float nPos=0, nNeg=0, nZ=0;
    float posTot = 0, negTot = 0, zTot = 0;
    scanf("%d", &length);
    int a[length];
    
    for(int i=0; i<length; i++){
        scanf("%d", &a[i]);
    }
    
    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++){
        if(a[i] > 0){nPos++;}
        else if(a[i] < 0){nNeg++;}
        else{nZ++;}
    }
    
    posTot = nPos/length;
    negTot = nNeg/length;
    zTot = nZ/length;

    printf("%f\n", posTot);
    printf("%f\n", negTot);
    printf("%f\n", zTot);

    return 0;
}