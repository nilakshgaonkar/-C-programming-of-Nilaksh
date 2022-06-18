#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20] = "Hello";
    char str2[] = "Nilaksh";

    strcat(str1 , str2);

    printf("Now str 1 is :%s" , str1);
    
    return 0;
}