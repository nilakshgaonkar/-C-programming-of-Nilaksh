// A PROGRAMME TO CHECK WHEATHER A NUMBER IS DIVISIBLE BY 50 OR NOT

#include<stdio.h>

int main()
{
    int number;
    int result;

    printf("Enter the number :");
    scanf("%d" , &number);

    printf("Divisibility test returns:%d\n",result = number%50);

    if(result==0){
        printf("The number is divisible 50 ");
    }
    else{
        printf("The number is not divisible 50");
    }

    // IF THE REMAINDER IS 0 THEN IT DIVISBLE
    return 0;
}