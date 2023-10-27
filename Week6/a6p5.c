/*
a6p5
Kinlo Ephriam Tangiri
kephriamtangiri@constructor.university

Binary representation backwards
*/

#include <stdio.h>
#include <math.h>

int main(){
    unsigned char unsch, temp;
    int i, decimal = 0;

    scanf("%c", &unsch);
    temp = unsch;

    //iterating through all 8 bits of char
    for (i = 0; i < 8; i++){
        //checking with bit mask if bit 1 is set
        if(temp & 1){
            decimal += pow(2,i);
        }
        //right shift by 1 to check next bit on next iteration
        temp = temp >> 1;
    }
    temp = unsch; //reassigning the value of ucsch to tem
    printf("The decimal representation is: %d\n", decimal);
    printf("The backwards binary representation is: ");

    //Iterate through all 8 bits of char
    for(i = 0; i < 8; i++){
        //if the limit haven't been past, print something
        if(pow(2,i) <= decimal){
            //checking bit 1 is set
            if((temp & 1) == 1)
                printf("1");
            else printf("0");
            //Right shifting by 11 to check next bit on next iteration
            temp = temp >> 1;
        }
    }
    printf("\n");
    return 0;
}
