/*
a6p1
Kinlo Ephriam Tangiri
kephriamtangiri@constructor.university

Determining the least significant bit
*/


#include<stdio.h>


// Macro swap defined that takes 3 arguments
// It performs swap between 2nd and 3rd argument using a temp variable

#define swap(type, a, b) {type temp; temp = a; a = b; b = temp;}

int main() {
    int x, y;
    double w, z;
    scanf("%d%d%lf%lf", &x, &y, &w, &z);

    // Here, I am calling macro with integers and call macro with double
    swap(int, x, y);
    swap(double, w, z);

    // Print result after swapping using macro swap
    printf("After swapping:\n%d\n%d\n%.6f\n%.6f\n", x, y, w, z);

    return 0;
}
