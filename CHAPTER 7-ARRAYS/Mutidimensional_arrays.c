#include<stdio.h>

int main()
{
    // marks of 2 students in 3 subjects with 2 dimensional array
    
    int marks[2][3];

    // marks of first students
    marks [0][0] = 91;
    marks [0][1] = 92;
    marks [0][2] = 93;

    // marks of second student
    marks [1][0] = 84;
    marks [1][1] = 73;
    marks [1][2] = 80;

    printf("Stutent 1 : subject 1 = %d\t" , marks[0][0]);
    printf("subject 1 : subject 2 = %d\t" , marks[0][1]);
    printf("subject 1 : subject 3 = %d\t" , marks[0][2]);

    printf("\n\n");
    
    printf("Student 2 : subject 1 = %d\t" , marks[1][0]);
    printf("subject 2 : subject 1 = %d\t" , marks[1][1]);
    printf("subject 2 : subject 1 = %d\t" , marks[1][2]);



    return 0;
}