// #include<stdio.h>

// int main()
// {
//     int age = 22;
//     int age2 = 23;
//     int *ptr = &age;
//     int *ptr2 = &age2;

//     printf("The value of ptr is :%u\n" , ptr);
//     printf("The value of ptr2 is :%u\n" , ptr2);

//     printf("The difference between ptr is :%u\n" , ptr - ptr2);

//     printf("\n");

//     ptr2 = &age;
//     printf("The comparison is :%u\n" , ptr == ptr2);

//     return 0;
// }








































// CREATE A 2D ARRAY BY TAKING INPUT FROM THE USER . WRITE A DISPLAY FUNCTION TO PRINT THE CONTENT OF 2D ARRAY

#include<stdio.h>

void display(int arr[][2] , int n  , int m);

int main()
{
    int value[2][2];

    printf("Enter the 1 value :");
    scanf("%d" , &value[0][0]);

    printf("Enter the 2 value :");
    scanf("%d" , &value[0][1]);

    printf("Enter the 3 value :");
    scanf("%d" , &value[1][0]);

    printf("Enter the 4 value :");
    scanf("%d" , &value[1][1]);

    printf("\n")
;
    display(value , 0 , 2);
    display(value , 1 , 2);


    return 0;
}

void display(int arr[][2] , int n  , int m){
    for ( int i = 0; i < m; i++)
    {
        printf("The value is :%d\n" , arr[n][i]);
    }
    
}