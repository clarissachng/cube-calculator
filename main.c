#include <stdio.h>

int cube(int x) {
    int cube = x*x*x;
    return cube;
}

int main(void) {
    int x;
    printf("Enter a number:");
    scanf("%d" , &x);
    int total = cube(x);
    printf("The cube of this number is: %d\n", total);
    return 0;
}