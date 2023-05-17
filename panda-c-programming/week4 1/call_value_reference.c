#include <stdio.h>
int x = 0, y = 0; // now it is global variable and can access by all function like user defined function as well as bulit function.
void add(void)
{
    int temp = x + y;
    printf("answer of addition: %d\n", temp);
}
void sub(void)
{
    int temp = x - y;
    printf("answer of substraction: %d\n", temp);
}
// In this div section i used call by reference
// actually x and y both are integer so they can not provide
// floating result & only making chages in temp not help to get floating result. so
// i used pointer variable. Here *p holding the address of x and value.But if i write p=something
// then meomory address of x that was holding by *p that will change but not the value of x.so
// making changes in x value i have to write *p=&x it will access the memory address and value of x & can change the value of x also.
void div(void)
{
    float *p = &x;
    float *q = &y;
    float temp = *p / *q;
    printf("answer of division: %.2f\n", temp);
}
void mul(void)
{
    int temp = x * y;
    printf("answer of multification: %d\n", temp);
}
int main()
{
    scanf("%d%d", &x, &y);
    add();
    sub();
    div();
    mul();
    return 0;
}