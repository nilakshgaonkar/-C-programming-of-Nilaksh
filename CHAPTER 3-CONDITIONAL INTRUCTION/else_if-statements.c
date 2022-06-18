#include<stdio.h>

int main()
{
    int number;

    printf("Enter your number :");
    scanf("%d" , &number);

    if (number==1)
    {
        printf("your number is 1\n");
    }
    else if(number==2){
        printf("Your number is 2\n");
    }
    else if(number==3){
        printf("Your number is 3\n");
    }
    else if(number==4){
        printf("Your number is 4\n");
    }
    else if(number==5){
        printf("Your number is 5\n");
    }
    else{
        printf("Your number is not 1 , 2 , 3, 4 or 5");
    }
    
    return 0;
}