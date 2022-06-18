// CREATE A STRING USING "" AND PRINT ITS CONTENT USING A LOOP

#include<stdio.h>

int main()
{
    char str[] = "NILAKSH";
    char *ptr = &str[0];

    while (*ptr != '\0')
    {
       printf("%c" , *ptr);
       ptr++;
    }
    

    return 0;
}