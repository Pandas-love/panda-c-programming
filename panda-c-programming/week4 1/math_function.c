// use of ceil(),floor(),sqrt(),pow(),round(),abs() functio.
#include <stdio.h>
#include <math.h>   //it uses for ceil(),floor(),sqrt(), pow() and round() function
#include <stdlib.h> //it uses for abs() function
int main()
{
    double x;
    scanf("%lf", &x);
    printf("use of ceil function: %.2lf\n", ceil(x));
    // ceil use for take upper value like if value is 3.0001 to 3.999 then function will give 4.000 result.
    printf("use of floor function: %.2lf\n", floor(x));
    // floor use for take lower value like if value is 3.0001 to 3.999 then function will give 3.000 as result
    printf("use of round function: %.2lf\n", round(x));
    // round funtion work like two partition 3.001 to 3.4999 then function will give 3 and if 3.5 to 3.99 then function give 4 as a result
    printf("use of square root function: %.2lf\n", sqrt(x));
    // this function used to get square root of a value
    printf("use of power function: %.2lf\n", pow(x, 2));
    // this function used to get power of any giver value
    printf("use of absulate function: %.2lf\n", abs(x));
    // this function used to get absulate of value of a number like positive = positive but negative = positive.
    return 0;
}