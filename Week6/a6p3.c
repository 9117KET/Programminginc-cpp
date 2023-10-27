/*
a6p3
Kinlo Ephriam Tangiri
kephriamtangiri@constructor.university

Determining the mid-range of three values
*/
#include <stdio.h>
#define MIN(X,Y)((X)<(Y) ? (X):(Y))
#define MAX(X,Y)((X)>(Y) ? (X):(Y))

int main(){
    int a,b,c; //getting three integer values
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    // using min and max initially between a and b and calling the macros
    int min = MIN(MIN(a,b),c);
    int max = MAX(MAX(a,b),c);

    printf("The mid-range is: %lf", (min+max)/2.0);
    printf("\n");
}
