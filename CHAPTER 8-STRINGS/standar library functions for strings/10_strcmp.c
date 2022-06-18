#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20] = "Nilakshu";
    char str2[] = "Nilaksh";

    int value = strcmp(str1 , str2);

    printf("Now the value is :%d" , value);
    
    return 0;
}