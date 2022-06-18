// DO-WHILE LOOP EXECUTES THE CODE AND THEN CHECKS THE CONDITION AND IT RUNS ATLEAST ONCE

#include<stdio.h>

int main()
{
    int i = 0;

    printf("Enter the value of i :");
    scanf("%d" , &i);

    do
    {
        printf("the value of i is %d\n" , i);
        i++;   
    } while (i<=20);
    

    return 0;
}












