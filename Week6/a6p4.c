/*
a6p4
Kinlo Ephriam Tangiri
kephriamtangiri@constructor.university

Conditional compilation for showing intermediate results
*/

#include <stdio.h>
#include <stdlib.h>

void scalarProduct(int n, double v[], double w[]){
    int i;
    int scalP = 0, temp = 0;
    #if defined(INTERMEDIATE)
    printf("The intermediate product values are: \n");
    #endif // defined
    for (i= 0; i < n; i++){
        temp = (v[i]*w[i]);
        scalP += temp;

        #if defined(INTERMEDIATE)
        printf("%d\n", temp);
        #endif // defined
    }
    printf("The scalar product is: %d\n", scalP);
}
int main(){
    int n, i;
    double *v, *w;

    scanf("%d", &n);
    //Allocating memory for both vectors
    v = (double *) malloc(sizeof(double)*n);
    w = (double *) malloc(sizeof(double)*n);

    if((v == NULL) || (w == NULL)){
        exit(1);
    }
    //loop for accepting the input into an array w
    for (i=0; i<n; i++){
        scanf("%lf", &w[i]);
    }
    scalarProduct(n, v, w);

    free(v);
    free(w);
}
