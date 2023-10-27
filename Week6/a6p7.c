/*
a6p7
Kinlo Ephriam Tangiri
kephriamtangiri@constructor.university

set 3bit
*/

#include<stdio.h>
#include<stdlib.h>
void set3bits(unsigned char *c, int b1, int b2, int b3);

int main(){
    unsigned char c, mask = 128;
    int i = 8, b1, b2, b3;

    //getting char from user
    scanf("%c", &c);

    //inserting the three bits that will change to 1
    scanf("%d%d%d", &b1, &b2, &b3);

    printf("The decimal representation is: %d\n", c);
    printf("The binary representation is: ");

    //printing the binary representation
    while (i>0){
        if(c & mask)
            printf("1");
        else
            printf("0");
        mask >>= 1;
        i--;
    }
    set3bits(&c, b1, b2, b3);

    //printing after setting the bits
    printf("\nAfter setting the bits: ");
    i = 8;
    mask = 128;
    while (i>0){
        if(c & mask)
            printf("1");
        else
            printf("0");
        mask >>= 1;
        i--;
    }
    printf("\n");
    return 0;
}
void set3bits(unsigned char *c, int b1, int b2, int b3)
{
    (*c)|=(1<<b1);
    (*c)|=(1<<b2);
    (*c)|=(1<<b3);
}
