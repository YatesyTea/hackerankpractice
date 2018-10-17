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
    
    int size = 0, total1=0, total2=0, b=0, answer=0;
    scanf("%d", &size);
    int array[size][size];
    
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            scanf("%d", &array[i][j]);
        }
    }
    
    for(int i=0; i<size; i++){
        total1 = total1 + array[b][i];
        b++;
    }
    b=size-1;
    for(int i=0; i<size; i++){
        total2 = total2 + array[b][i];
        b=b-1;
    }
    
    answer = abs(total1 - total2);
    printf("%d", answer);
    return 0;
}