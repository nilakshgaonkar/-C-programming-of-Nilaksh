#include<stdio.h>
#include<math.h>

int main()
{
    int side;
    

    printf("Enter the value of side :");
    scanf("%d" , &side);

    int area = side * side;

    printf("The are of square is :%f cm" , pow(side,2));

    return 0;
}