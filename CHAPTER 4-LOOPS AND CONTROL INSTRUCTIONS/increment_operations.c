// i++; ---> first print then increment and i is increased by 1
// ++i; ---> first increment then increment
// i--; i is decreased by 1
// i+=10; increaments i by 10 , we can use any number in place of 10

#include<stdio.h>

int main()
{
    int i= 5;

    printf("The value after i++ is :%d\n" , i++);
    printf("The value of i is :%d\n" , i);

    printf("The value after i++ is :%d\n" , ++i);
    printf("The value of i is :%d\n" , i);

    printf("The value after i-- is :%d\n" , i--);
    printf("The value of i is :%d\n" , i);

    printf("The value after --i is :%d\n" , --i);
    printf("The value of i is :%d\n" , i);

    printf("The value after i+=10 is :%d\n" , i+=10);
    printf("The value of i is :%d\n" , i);

    printf("The value after i+=2 is :%d\n" , i+=200);
    printf("The value of i is :%d\n" , i);

    return 0;
}