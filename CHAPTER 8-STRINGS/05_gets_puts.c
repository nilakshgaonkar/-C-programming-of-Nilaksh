#include<stdio.h>

int main()
{
    char string[50];

    printf("Enter your name :");
    gets(string); // this is used to print words with multiple spaces
    puts(string); // this is used to print the word in next line without the printf statement

    // printf("Your name is %s" , string);

    return 0;
}