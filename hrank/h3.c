#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a[3], p=0, q=0, b[3];
    scanf("%d %d %d",&a[0], &a[1], &a[2]);
    scanf("%d %d %d",&b[0], &b[1], &b[2]);
	int length = sizeof(a)/sizeof(a[0]);
    
    for(int i = 0; i < length; i++){
        if(a[i] > b[i]){
            p++;
        }
        else if(a[i] < b[i]){
            q++;
        }
    }
    printf("%d %d", p,q);
    return 0;
}