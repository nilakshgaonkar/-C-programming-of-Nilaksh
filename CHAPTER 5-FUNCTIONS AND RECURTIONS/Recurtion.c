// A PROGRAMME TO CALCULATE FACTORIAL USING RECURSION

#include<stdio.h>

int factorial(int x);

int main()
{
    int a;

    printf("Enter a number ti get its factorial :");
    scanf("%d" , &a);

    printf("The factorial of %d is : %d" , a , factorial(a));

    return 0;
}

int factorial(int x){
    int f;

    printf("Calling factorial %d\n" , x);
    if(x == 0 || x == 1){
        return 1;
    }
    else{
        f = x * factorial(x-1);
        return f;
    }
}