/*
a6p1
Kinlo Ephriam Tangiri
kephriamtangiri@constructor.university

Determining the least significant bit
*/


#include <stdio.h>
//defining a macro that takes 3 arguments
//(A&1) conditional AND checks if the least significant bit is set to A
// if set, the value is A otherwise (:) B
#define MAC(A, B, C) ((A & 1) ? (C) : (B))
int main(){
    unsigned char c;
    int x;
    int y;
    scanf("%c", &c);
    x = c;
    printf("The decimal representation is: %d\n", x);
    y = MAC (x, 0, 1);//using the MAC macro, calculating the value of y based on lsb
    printf("The least significant bit is: %d\n", y);
    return 0;
}
