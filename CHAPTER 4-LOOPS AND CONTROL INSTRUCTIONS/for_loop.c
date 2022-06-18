// #include<stdio.h>

// int main()
// {
   

//     for(int i = 0 ; i <= 10 ; i++){
//         printf("The value of i is %d\n" , i);
//     }

//     return 0;
// }















// FOR LOOP IN DECREAMENTING ORDER 

// #include<stdio.h>

// int main()
// {
//     int i;

//     for(int i=10 ; i > 3 ; i--){
//         printf("The value of i is %d\n" , i);
//     }

//     return 0;
// }















// THIS IS A PROGRAMME TO PRINT N NATURAL NUMBERS IN REVERSE ORDER 

#include<stdio.h>

int main()
{
    int n;

    printf("Enter the value of n :");
    scanf("%d" , &n);

    for (int i = n; i > 0; i--)
    {
        printf("%d\n" , i);
    }
    

    return 0;
}