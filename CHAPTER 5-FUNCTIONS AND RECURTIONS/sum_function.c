#include<stdio.h>


//SUM IS A FUNCTION WHICH TAKES A AND B AS INPUT AND RETURNS AN INTEGER AS AN OUTPUT
int sum(int a , int b); // function prototype

int main()
{
    int c;  

    c = sum(20 , 10);// function call
    printf("The value of c is %d" , c);

    return 0;
}

int sum(int a , int b){ // function declaration
    int c;
    c = a + b;
    return c ;
}