#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define lli long long int

int main(){
     lli a[10], a_count,total=0;
    scanf("%lld",&a_count);
    for(int i = 0; i < a_count; i++){
        scanf("%lld", &a[i]);
        total = total + a[i];
    }
    /*for(int i = 0; i < a_count; i++){
        total = total + a[i];
    }
    */
    printf("%lld", total);
    return 0;
}