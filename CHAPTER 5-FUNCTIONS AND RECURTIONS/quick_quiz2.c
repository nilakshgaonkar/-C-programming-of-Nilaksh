// ADD 2 NUMBERS USING FUNCTION AND PRINT THE MULTIIPLICATION TABLE OF N

#include<stdio.h>

int sum(int a , int b);
int table();

int main()
{
   int p;
   int q;
   int c;

   printf("Enter the value of P :");
   scanf("%d" , &p);

   printf("Enter the value of Q :");
   scanf("%d" , &q);

    c = sum(p,q);
    printf("The sum of both numbers is :%d\n" , c);
   
    table();
    return 0;
}

int sum(int a , int b){
    int result;

    result = a + b;
    return result;
}

int table(){
    int n;
    int i;

    printf("Enter a number to create its table :");
    scanf("%d" , &n);

    for ( i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n" , n , i , n*i);
    }

    return 0;
    
}