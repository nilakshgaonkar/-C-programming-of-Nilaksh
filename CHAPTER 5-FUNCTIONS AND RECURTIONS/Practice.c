// WRITE A PROGRAMME USING FUNCTIONS TO FIND AVERAGE OF THREE NUMBERS

// #include<stdio.h>

// int average(int a);

// int main()
// {
//    int av;

//     average(av);

//     return 0;
// }

// int average(int a){
//     int b , c , d;
//     float average;

//     printf("Enetr the value of b :");
//     scanf("%d" , &b);

//     printf("Enetr the value of c :");
//     scanf("%d" , &c);

//     printf("Enetr the value of d :");
//     scanf("%d" , &d);

//     average = (float)(b + c + d)/3;

//     printf("The average of %d , %d and %d is : %f" , b , c , d , average);

//     return 0; // we can alsso write return average
// }
































// A PROGRAMME TO CONVERT CELCIUS TO FAHRRNHEIT FORMULA((0°C × 9/5) + 32 = 32°F)

// #include<stdio.h>

// int conversion();

// int main()
// { 
//     int far;

//     conversion(far);

//     return 0;
// }

// int conversion(){
//     int c;
//     float far;
    
//     printf("Enter the value of temperature in celicius to convert it into fahrrnhiet :");
//     scanf("%d" , &c);

//     far = (c * 9/5) + 32;

//     printf("The temperature in fahrrnhiet is :%f" , far);

//     return far;
// }



































// A FUNCTION TO CALCULATE THE FORCE OF ATTRACTION ON A BODY OF MASS M EXERTED BY EARTH

// #include<stdio.h>

// float force(float mass);

// int main()
// {
//     float m;

//     printf("Enter the value of mass in kg :");
//     scanf("%f" , &m);

//     printf("The value of force in newton is :%.1f" , force(m));

//     return 0;
// }

// float force(float mass){
//     float result;

//     result = mass * 9.8;
//     return result;
// }
































#include<stdio.h>s

int main()
{
    int n;
    int sum = 0;

    printf("Enter the value of n :");
    scanf("%d" , &n);

    for (int i = 0; i <=n; i++)
    {
        sum += i;
    }
     printf("The sum of first n natural numbers is : %d\n" , sum);

    return 0;
}