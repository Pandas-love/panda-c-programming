#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    double x;
    scanf("%lf", &x);
    double figure = sqrt(x);
    printf("%.2lf", figure);
    return 0;
}