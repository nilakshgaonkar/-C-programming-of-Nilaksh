// // A PROGRAMME TO PRINT MULTIPLICATON TABLE OF A GIVEN NUMBER N 

// #include<stdio.h>

// int main()
// {
//     int n = 1;

//     printf("THE MULTIPLICATION TABLE OF 20\n");

//     while (n<=10)
//     {
//         printf("20 x %d = %d\n", n , 20*n);
//         n++;
//     }

//     return 0;
// }
















// A PROGRAMME TO PRINT MULTIPLICATON TABLE OF 10 in reverse order

// #include<stdio.h>

// int main()
// {
//     int n;

//     printf("THE MULTIPLICATION TABLE OF 10 IN REVERSE ORDER\n\n");

//     for ( int n = 10 ; n >= 1 ; n--)
//     {
//         printf("10 x %d = %d\n" , n , 10*n);
//     }
    

//     return 0;
// }
























// A PROGRAMME TO SUM FIRST TEN NATURAL NUMBERS USING WHILE LOOP

// #include<stdio.h>

// int main()
// {
//     int i = 0;
//     int sum = 0;

//     while (i<=20)
//     {
//         i++;
//         sum += i;
//     }

//     printf("The value of sum from (1 to 10) is : %d\n" , sum);

//     return 0;
// }














// ABOVE SAME PROGRAMME USING DO-WHILE LOOP

// #include<stdio.h>

// int main()
// {
//     int i = 0;
//     int sum = 0;

//     do{

//         i++;
//         sum +=i;

//     } while (i<=10);

//     printf("The value of sum from (1 to 10) is : %d" , sum);
    
//     return 0;
// }






















// A PROGRAMME TO CALCULATE THE SUM OF THE NUMBERS OCCURING IN THE MULTIPLICATION TABLE OF 8

// #include<stdio.h>

// int main()
// {
//     int n;
//     int sum = 0;

//     for ( n = 0 ; n<=10 ; n++)
//     {
//         printf("8 x %d = %d\n" , n , 8 * n);
//         sum += 8 * n;
//     }

//     printf("The sum of the numbers is : %d" , sum);
    

//     return 0;
// }
























// A PROGRAMME TO CALCULATE FACTORIAL OF GIVEN NUMBER USING ANY LOOP
// FACTORIAL OF 4 = 1 * 2 * 3 * 4 * 5

// #include<stdio.h>

// int main()
// {
//     int i;
//     int factorial = 1;

//     for(i = 5 ; i ; i-- ){

//         factorial *= i;
//     }

//     printf("The factorial of 5 is :%d" , factorial);

//     return 0;
// }

// OR 

// #include<stdio.h>

// int main()
// {
//     int i;
//     int factorial = 1;
//     int n = 9;

//     for(i = 1 ; i<=n ; i++ ){

//         factorial *= i;
//     }

//     printf("The factorial of %d is :%d" , n , factorial);

//     return 0;
// }

































// A PROGRAMME TO REPEAT 8 USING WHILE LOOP

//#include<stdio.h>

// int main()
// {
//     int i = 8;

//     while (i)
//     {
//         printf("%d\n" , i);
//     }
    

//     return 0;
// }






















// A PROGRAMME TO CHECK WHEATHER A GIVEN NUMBER IS PRIME OR NOT USING LOOPS

// #include<stdio.h>

// int main()
// {
//     int n;
//     int i;
//     int prime;

//     printf("Enter a number :");
//     scanf("%d" , &n);

//     for ( i = 2 ; i < n ; i++)
//     {
//         if (n%i==0)
//         {
//             prime = 0;
//             break;
//         }
//     }
//     if (prime==0)
//     {
//         printf("%d is not a prime number" ,n);
//     }
//     else{
//         printf("%d is a prime number" , n);
//     }
    
//     return 0;
// }

















// #include<stdio.h>

// int main()
// {
//     int n;
//     int i = 2;
//     int prime = 1;

//     printf("Enter the number :");
//     scanf("%d" , &n);

//     while (i<n)
//     {
//         i++;
//         if (n%i==0){
//             prime = 0;
//             break;
//         }
//     }

//     if (prime == 0)
//     {
//         printf("%d is not a prime number" , n);
//     }
//     else{
//         printf("%d is a prime number" , n);
//     }
    

//     return 0;
// }