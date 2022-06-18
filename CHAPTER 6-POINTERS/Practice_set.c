// WRITE A PROGRAMME TO PRINT THE ADDRESS OF A VARIABLE AND USE THIS ADDRESS TO GET THE VALUE OF THIS VARIABLE

// #include<stdio.h>

// int main()
// {
//     int a ;  
//     int *ptr;
//     ptr = &a;

//     printf("The value of a is %u\n" , *(&a));
//     printf("The address of a is :%u\n" , ptr);
//     printf("The address of a is :%u\n" , &a);
//     printf("The value of a is :%u\n" , *ptr);

//     return 0;
// }





























// Q2) WRITE A PROGRAMME HAVING A VARIABLE I.PRINT THE ADDRESS OF I.PASS THIS VARIABLE TO A FUNCTION AND PRINT ITS ADDRESS.ARE THESE ADDRESS SAME . WHY?

// #include<stdio.h>

// int printadd(int a);

// int main()
// {
//     int i = 4;

//     printf("The address of i is :%u\n",&i);
//     printadd(i);
//     printf("The address of variable i is :%u\n" , &i);
//     return 0;
// }

// int printadd(int a){
//     printf("The address of variablee a is :%u\n" , &a);
// }






























// write a program to change the value of a variable to ten times of its current value , write a function and pass the value by reference


// #include<stdio.h>

// void change(int *n);

// int main()
// {
//     int n = 5;
//     change(&n);
//     printf("The value of n is :%d" , n);

//     return 0;
// }

// void change(int *n){
//     *n = 10 * *n; 
// }































// WRITE A PROGRAM USING A FUNCTION WHICH CALCULATE THE SUM AND AVERAGE OF 2 NUMBERS . USE THE POINTERS AND PRINT THE VALUE OF SUM AND AVERAGE IN MAIN

// #include<stdio.h>

// void sum_average(int a , int b , int *sum ,float *average);

// int main()
// {
//     int a , b;
//     int sum;
//     float average;

//     printf("Enter the value of a :");
//     scanf("%d" , &a);

//     printf("Enter the value of b :");
//     scanf("%d" , &b);

//     printf("\n");

//     sum_average(a , b  , &sum , &average);

//     printf("The sum of a and b is :%d\n", sum);
//     printf("The average of a and b is :%.2f\n" , average);



// return 0;
// }

// void sum_average(int a , int b ,int *sum ,float *average){
//     *sum = a + b;
//     *average = (float)(*sum)/2;
// }





































// WRITE A PROGRAM TO PRINT THE VALUE OF A VARIABLE I BY USING "POINTER TO POINTER" TYPE VARIABLE

// #include<stdio.h>

// int main()
// {
//     int j = 155;
//     int *k = &j;
//     int **i = &k; 

//     printf("The value of i is :%d" , **i);

//     return 0;
// }