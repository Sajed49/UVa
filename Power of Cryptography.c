#include <stdio.h>
#include <math.h>

int main (void) {
    double a,b,c;

    while (scanf("%lf %lf", &a , &b)==2) {
        printf("%.0lf\n",pow(b , 1/a));
    }

    return 0;
}



