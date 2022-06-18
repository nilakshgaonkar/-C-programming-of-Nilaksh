#include<stdio.h>

void display(); // function prototype

int main()
{
    int a;

    display(); // function call

    return 0;
}

// function defenition
void display(){  
    printf("Hello I am display");
}