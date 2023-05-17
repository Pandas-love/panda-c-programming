#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    printf("0th index value: %d\n", arr[0]);
    printf("0th index value: %d\n", *arr); // array itself is a pointer and this method
    // only works for 1st value of the array.
    printf("1th index value: %d\n", arr[1]);
    printf("1th index value: %d\n", 1 [arr]); // this is another method for access array index
    // actually arr[1] means arr + 1, here arr is the address of the first value and with that address we going to add 1
    // so we are accessing second index of array. On the other hand, 1[arr] means 1 + arr which means 1 add with 0th index address whic
    // means 1th index of the array.
    printf("0th index address: %d\n", (arr));
    // like point only pointer name holding only address not accessing value but *pointer_variable holding address but accessing
    // the value also and shows only value.
    printf("0th index value: %d\n", *(arr));
    printf("1th index address: %d\n", (arr + 1));
    printf("1th index value: %d\n", *(arr + 1));
    return 0;
}