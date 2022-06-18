#include<stdio.h>
#include<string.h>

int main()
{
   char name[] = "Nilaksh is a great man";
   char name2[50];

   strcpy(name2 , name);

    printf("Now the sentence is name2 is :\t%s" , name2);

    return 0;
}   