// WHILE LOOP CHECKS THE CONDITON AND THEN EXECUTES THE CODE

#include<stdio.h>

int main()
{
    int a=5;

    printf("Enter the value of a :");
    scanf("%d" , &a);

    while (a<=10)
    {
        printf("The value of a is :%d\n" , a);
        a++;
    }
    
    
    return 0;
}