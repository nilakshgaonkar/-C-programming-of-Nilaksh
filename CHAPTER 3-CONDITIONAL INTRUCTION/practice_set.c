// #include<stdio.h>

// int main()
// {
//     int a = 10;

//     if(a = 11)
//     {
//         printf("I am 11");
//     }
//     else{
//         printf("I am not 11");
//     }
//     return 0;
// }












// Q 1) A PROGRAMME TO CHECK WHEATHER A STUDENT HAS FAILED OR NOT. HE REQUIERES TOTAL 40% AND MINIMUM 30% IN EACH SUBJECT TO PASS ASSUME 3 SUBJECTS

// #include<stdio.h>

// int main()
// {
//     int maths , science , english;
//     float total;

//     printf("Enter the value of Maths :\n");
//     scanf("%d" , &maths);

//     printf("Enter the value of Science :\n");
//     scanf("%d" , &science);

//     printf("Enter the value of English :\n");
//     scanf("%d" , &english);

//     total = (maths + science + english)/3;

//     if((total<40) || maths<33 || science<33 || english<33)
//     {
//         printf("your total percentage is %f You have failed\n" , total);
//     }
//     else{
//         printf("your total percentage is %f You have passed\n" , total);
//     }


//     return 0;
// }














// Q 2) A PROGRAMME TO CHECK WHEATHER A YEAR IS LEAP YEAR OR NOT

// To check if a year is a leap year, divide the year by 4. If it is fully divisible by 4, it is a leap year. For example, the year 2016 is divisible 4, so it is a leap year, whereas, 2015 is not. However, Century years like 300, 700, 1900, 2000 need to be divided by 400 to check whether they are leap years or not.

// #include<stdio.h>

// int main()
// {
//     int year;

//     printf("Enter the year :");
//     scanf("%d" , &year);

//     if(year%4==0){
//         printf("%d is a leap year" , year);
//     }
//     else{
//         printf("%d is not a leap year" , year);
//     }

//     return 0;
// }












// Q 3)A PROGRAMME TO DETERMINE WHEATHER A CHARACTER ENTERED IS LOWERCASE OR UPPERCASE
// 97-122 = a-z
// 65-90 = A-Z

// #include<stdio.h>

// int main()
// {
//     char character;

//     printf("Enter the character :");
//     scanf("%c" , &character);

//     if (character>=97 && character<=122)
//     {
//         printf("The character %c is lowercase" , character);
//     }
//     else if(character>=65 && character<=90)
//     {
//         printf("The character %c is  uppercase" , character);
//     }
//     else{
//         printf("It is not a chracter");
//     }
    
//     return 0;
// }
























// Q 4) A PROGRAMME TO FIND GREATEST NUMBER AMONG THE GIVEN FOUR NUMBER

#include<stdio.h>

int main()
{
    int first , second , third , fourth ;

    printf("Enter the first numbers :");
    scanf("%d" ,  &first );

    printf("Enter the second numbers :");
    scanf("%d" ,  &second );

    printf("Enter the third numbers :");
    scanf("%d" ,  &third );

    printf("Enter the fourth numbers :");
    scanf("%d" ,  &fourth );


    if (first>second && first>third && first>fourth)
    {
        printf("%d is the greatest" , first);
    }
    else if (second>first && second>third && second>fourth)
    {
        printf("%d is the greatest" , second);
    }
    else if (third>first && third>second && third>fourth)
    {
        printf("%d is the greatest" , third);
    }
    else if (fourth>first && fourth>second && fourth>third)
    {
        printf("%d is the greatest" , fourth);
    }
    else{
        printf("They are all equal to each other so they are not valid");
    }

    return 0;
}
















