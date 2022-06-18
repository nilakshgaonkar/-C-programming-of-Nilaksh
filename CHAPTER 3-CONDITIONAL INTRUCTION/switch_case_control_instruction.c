// #include<stdio.h>

// int main()
// {
//     int rating;

//     printf("Enter your rating :");
//     scanf("%d" , &rating);

//     switch (rating)
//     {
//     case 6:
//         printf("Your rating is 6");
//         break;
//     case 7:
//         printf("Your rating is 7");
//         break;
//     case 8:
//         printf("Your rating is 8");
//         break;
//     case 9:
//         printf("Your rating is 9");
//         break;
//     case 10:
//         printf("Your rating is 10");
//         break;
//     default:
//         printf("Your rating is invalid");
//         break;
//     }

//     return 0;
// }














// A PROGRAMME TO FIND THE GRADES OF A STUDENT GIVEN HIS MARKS BASED ON BELOW

#include<stdio.h>

int main()
{
    int marks;

    printf("Enter your marks :");
    scanf("%d" , &marks);

    switch (marks)
    {
    case 90:
        printf("Your grade is A");
        break;
    case 80:
        printf("Your grade is B");
        break;
    case 70:
        printf("Your grade is C");
        break;
    case 60:
        printf("Your grade is D");
        break;
    case 50:
        printf("Your grade is E");
        break;
    case 40:
        printf("Your grade is F");
        break;
    case 30:
        printf("Your grade is G");
        break;
    default :
        printf("You have failed");
        break;

    }
    return 0;
}