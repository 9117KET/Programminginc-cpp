#include <stdio.h>

int main(){
    //input three values
    int a, b, c;
    printf("Enter three values: ");
    scanf("%d %d %d", &a, &b, &c);

    //Find the max and min value
    int max, min;

    if (a >= b && a >= c){
        max = a;
        min = (b <= c) ? b : c;
    }else if (b >= a && b >= c){
        max = b;
        min = (a <= c) ? a : c;
    }else {
        max = c;
        min = (a <= b) ? a : b;
    }
    //calculating the mid-range
    float mid = (float)(max + min)/2;
    // Output the result
    printf("The mid-range is: %.2f\n", mid);
    return 0;
}
