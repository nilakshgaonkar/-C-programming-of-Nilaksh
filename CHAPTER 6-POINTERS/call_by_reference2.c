#include<stdio.h>

void square(int n);
void _square(int *n);

int main()
{
    int number = 5;
    square(number);
    printf("The number is :%d\n" , number);

    _square(&number);
    printf("The number is :%d\n" , number);

    return 0;
}

// call by value
void square(int n){
    n = n * n;
    printf("The square is :%d\n" , n);
}

// call by reference
void _square(int *n){
    *n = (*n) * (*n);
    printf("The square is :%d\n" , *n);
}
