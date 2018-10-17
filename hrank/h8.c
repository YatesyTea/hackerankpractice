#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//This task requires me to find highest value in an array and find repeats of that value.

int main(){
    int n, hVal=0, c=0; //initialising values that will be used later.
    scanf("%d", &n); //Scanning for length of array.
    int candles[n-1]; //Creating array of candles.
    
    for(int i=0;i<n;i++){//For loop to scan in array and find highest value.
        scanf("%d", &candles[i]);
        
        if(candles[i] > hVal){
            hVal = candles[i];
            c = 1; //resets c to value of zero since there's only one of highest candle rn.
        }
        else if(candles[i] == hVal){
            c++; //Found another of same highest value so increment.
        }
    }
    printf("%d", c); //Print out number of highest value found at end.
    return 0;
}