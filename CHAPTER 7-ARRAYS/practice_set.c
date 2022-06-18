// WRITE A PROGRAM TO ENTER THE PRICE OF 3 ITEMS AND PRINT THEIR FINal COST WITH 18% GST

// #include<stdio.h>

// int main()
// {
//     float price[3];

//     printf("Enter the value of item 1 :");
//     scanf("%f" , &price[0]);

//     printf("Enter the value of item 2 :");
//     scanf("%f" , &price[1]);

//     printf("Enter the value of item 3 :");
//     scanf("%f" , &price[2]);

//     printf("\n");

//     printf("The total price of item 1 with GST is %f\n" , price[0] + (0.18 * price[0]));
//     printf("The total price of item 2 with GST is %f\n" , price[1] + (0.18 * price[1]));
//     printf("The total price of item 2 with GST is %f\n" , price[2] + (0.18 * price[2]));




//     return 0;
// }































// Q 2) WRITE A FUNCTION TO COUNT THE NUMBER OF ODD NUMBERS IN AN ARRAY

// #include<stdio.h>

// int CountOdd(int arr[] , int n);

// int main()
// {
//     int arr[] = {1 , 2 , 3 , 4 , 5 , 6};

//     printf("Total odd numbers are :%d" , CountOdd(arr , 6));

//     return 0;
// }

// int CountOdd(int arr[] , int n){
//     int count = 0;

//     for (int i = 0; i < n; i++)
//     {
//        if (arr[1]%2 != 0)// ODD
//        {
//            count++;
//        }
//     }

//     return count;
// }

































// Q 3) WRITE A FUNCTION TO REVERSE AN ARRAY

// #include<stdio.h>

// void reverse(int arr[] , int n);
// void printArr(int arr[] , int n);

// int main()
// {
//     int arr[] = {1 , 2 , 3 , 4 , 5 , 6};
//     reverse(arr , 6);
//     printArr(arr , 6);

//     return 0;
// }

// void printArr(int arr[] , int n){
//     for (int i = 0; i < n; i++)
//     {
//        printf("%d\t" , arr[i]);
//     }
    
// }

// void reverse(int arr[] , int n){
//     for (int i = 0; i < n/2; i++)
//     {
//         int first_value = arr[i] ;
//         int second_value = arr[n-i-1];

//         arr[i] = second_value;
//         arr[n-i-1] = first_value;
//     }
    
// }













































// Q 3) WRITE A PROGRAM TO PRINT THE FIRST N FIBONCCI SERIES

// #include<stdio.h>

// int main()
// {
//     int n;

//     printf("Enter the value of n to get fibonacci series :");
//     scanf("%d" , &n);

//     int fib[n];

//     fib[0] = 0;
//     fib[1] = 1;

//     for (int i = 2; i < n; i++)
//     {
//         fib[i] = fib[i-1] + fib[i-2];
//         printf("%d\t" , fib[i]);
//     }
    
//     return 0;
// }














































// Q 4) CREATE A 2D ARRAY STORING THE TABLE OF 2 AND 3

// #include<stdio.h>

// void printTable(int arr[][10] , int n , int m , int number);

// int main()
// {
//     int table[2][10];

//     printTable(table , 0 , 10 , 2);
//     printTable(table , 1 , 10 , 3);

//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\t" , table[0][i]);
//     }

//     printf("\n\n");

//     for (int i = 0; i < 10 ; i++)
//     {
//         printf("%d\t" , table[1][i]);
//     }
    

//     return 0;
// }

// void printTable(int arr[][10] , int n , int m , int number){
//     for (int i = 0; i < m; i++)
//     {
//         arr[n][i] = number * (i+1); 
//     }
    
// }











































// Q 5) CREATE AN ARRAY OF 10 NUMBERS . VERIFY THEM USING POINTER ARITHMETIC THAT (PTR+2) POINTS TO THE THIRD ELEMENT WHERE PTR IS A POINTER POINTING TO THE FIRST ELEMENT OF THE ARRAY

// #include<stdio.h>

// int main()
// {
//     int arr[10];

//     int *ptr = &arr[0];

//     ptr+=2;

//     if (ptr == &arr[2])
//     {
//        printf("They both points to the same address in memory");
//     }
//     else{
//         printf("They do not point to the same address");
//     }

//     return 0;
// }















































// Q 6) WRITE A PROGRAM TO CREATE AN ARRAY OF 10 INTEGERS AND STORE MULTIPLICATION TABLE OF 5 IN  IT 

// #include<stdio.h>

// int main()
// {
//     int table[10];
//     int number;

//     printf("Enter a number to print its multiplication table :");
//     scanf("%d" , &number);

//     for (int i = 0; i < 10; i++)
//     {
//         table[i] = number * (i+1);
//         printf("%d x %d = %d\n" , number , i+1 , table[i]);
//     }
    
//     return 0;
// }














































// Q 7) WRITE A PROGRAM CONTAINING A FUNCTION WHICH REVERSES THE ARRAY PASSED TO IT

//#include<stdio.h>

// void reverse(int *arr , int n);
// void printArr(int *arr , int n);

// int main()
// {
//     int arr[] = {1 , 2, 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};

//     reverse(arr , 10);
//     printArr(arr , 10);

//     return 0;
// }

// void reverse(int *arr , int n){
//         for (int i = 0; i < n/2; i++)
//         {
//            int first_number = arr[i];
//            int second_number = arr[n-i-1];

//             arr[i] = second_number;
//             arr[n-i-1] = first_number;
//         }
// }

// void printArr(int *arr , int n){
//     for (int i = 0; i < n; i++)
//     {
//        printf("%d\t" , arr[i]);
//     }
    
// }


















































// Q 8) WRITE A PROGRAM CONTAINING FUNCTIONS COUNTS THE NNUMBER OF POSITIVE INTEGERS IN AN ARRAY

// #include<stdio.h>

// void positive_num(int *arr , int n);

// int main()
// {
//     int numbers[] = {0,1,-2,3,4,5,-8,-9};

//     positive_num( numbers , 8);


//     return 0;
// }

// void positive_num(int *arr , int n){
//     int count = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//         {
//             count++;
//         }
        
//     }
//     printf("Total number of positive integers are :%d" , count);
// }














































// Q 9) CREATE AN ARRAY OF SIZE 3 X 10 CONTAINING MULTIPLICATION TABLE OF 2 , 7 AND 9 RESPECTIVELY

// #include<stdio.h>

// void printTable(int arr[][10] , int n , int m , int number);

// int main()
// {
//     int table[3][10];
//     printTable(table , 0 , 10 , 2);
//     printTable(table , 1 , 10 , 7);
//     printTable(table , 2 , 10 , 9);


//     return 0;
// }

// void printTable(int arr[][10] , int n , int m , int number){
//         for (int i = 0; i < m; i++)
//         {
//             arr[n][i] = number * (i+1);            
//             printf("%d x %d = %d\n" , number , i+1 , arr[n][i]);
//         }
//         printf("\n\n");
        
// }









































// #include<stdio.h>

// void printTable(int arr[][10] , int n , int m , int number);

// int main()
// {
//     int  m ;


//     printf("Enter the value of m :");
//     scanf("%d" , &m);

    
//     int table[3][m];
//     printTable(table , 0 ,  m, 2);
//     printTable(table , 1 ,  m, 7);
//     printTable(table , 2 ,  m, 9);


//     return 0;
// }

// void printTable(int arr[][10] , int n , int m , int number){
//         for (int i = 0; i < m; i++)
//         {
//             arr[n][i] = number * (i+1);            
//             printf("%d x %d = %d\n" , number , i+1 , arr[n][i]);
//         }
//         printf("\n\n");
        
// }

















































// Q 10) USING 3D ARRAY PRINT THE ADDRESS

// #include<stdio.h>

// int main()
// {
//     int arr[2][3][4];

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             for (int k = 0; k < 4; k++)
//             {
//                 printf("The address of %d  %d  %d is :%u\n" , i , j , k , &arr[i][j][k]);
//             }
            
//         }
        
//     }
    
//     return 0;
// }


