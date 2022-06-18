#include<stdio.h>

void printArray(int *ptr , int n);

int main()
{
    int array[5] = {10 , 20 , 30 , 40 , 50};

    printArray( array , 5);
    printf("%d" , array[2]);
    return 0;
}

void printArray(int *ptr , int n){
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is :%d\n" , i+1 , ptr[i]);
    }
    ptr[2] = 554466; // this value will be changed in array of main as well

}