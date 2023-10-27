/*
a6p6
Kinlo Ephriam Tangiri
kephriamtangiri@constructor.university

Binary representation
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    unsigned char ch;
    scanf("%c", &ch);

    const int maxbit = sizeof(char)*8 - 1;

    printf("Maxbit %d\n", maxbit);
    printf("The decimal representation is: %d\n", ch);
    printf("The binary representation is: ");
    for (int i = maxbit; i > 0; i--){
        printf("%d", (ch >> i)& 1 ? 1:0);
        //& and ? to check whether 1 or O. similar to and if else statement
        //i-- is meant to go to the right side
    }
    printf("\n");
    return 0;
}
