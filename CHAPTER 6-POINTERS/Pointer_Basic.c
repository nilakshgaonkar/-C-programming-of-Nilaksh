#include<stdio.h>

int main()
{
    int p;
    int i = 34;
    int *j = &i; // j will now store the address of is
    int **k;
    k = &j; // now k stores the adderess of j which stores the address of i

    printf("The value of i is :%d\n" , i);
    printf("The value of i is :%d\n" , *j);
    printf("\n");
    printf("The address of i is :%u\n" , &i);
    printf("The address of i is :%u\n" , j);
    printf("The address of j is :%u\n" , &j);
    printf("\n");
    printf("The value of j is :%u\n" , *(&j));
    printf("The value of i is :%u\n" , *(&i));
    printf("The value of k is :%u\n" , *(&k));
     printf("The value of p is :%u\n" , *(&p));
    printf("\n");
    printf("The address of j is :%u\n" , k);
    printf("The address of k is :%u\n" , &k);
   

    return 0;
}