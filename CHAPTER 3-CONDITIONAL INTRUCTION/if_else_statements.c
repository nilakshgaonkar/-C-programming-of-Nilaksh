// A BASIC IF LESE CONDITION TO CHECK WHEATHER A  NUMBERR IS EVEN OR ODD

// #include<stdio.h>

// int main()
// {
//     int a;

//     printf("Entr a number :");
//     scanf("%d" , &a);

//     if(a%2==0){
//         printf("%d number is even\n" , a);
//     }
//     else{
//         printf("%d number is odd\n" , a);
//     }
    
//     return 0;
// }








// Q) APROGRAMME TO CHECK WHEATHER A PERSON CAN DRIVE OR NOT 

#include<stdio.h>

int main()
{
    int age;

    printf("Enter the age of a person :");
    scanf("%d" , &age);

    if(age>=18 && age<=85){
        printf("Your age is %d, You can drive", age);
    }
    else{
        printf("your age is %d you cannot drive" , age);
    }

    return 0;
}