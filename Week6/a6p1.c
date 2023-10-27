

//defining macro using #define with three parameters

#define SWAP(x, y, dtype){dtype temp = x; x = y; y = temp;}

int main(){
    int a, b;
    double c, d;

    scanf("%d%d", &a, &b); //scanning two integer variables
    scanf("%lf%lf", &c, &d); //scanning two doubles variables

    SWAP(a, b, int); //swapping two integers
    printf("After swapping:\n");
    printf("%d\n%d",a,b);//swapping integer values being printed
    SWAP(c,d, double); //swapping double values being printed
    printf("\n");
    printf("%.6lf\n%.6lf\n",c,d);

    return 0;
}
