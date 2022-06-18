// APROGRAMME TO FIND THE AREA OF A CIRCLE

#include<stdio.h>
#include<math.h>

int area_of_circle(int c);

int main()
{
    int area;
    
    area_of_circle(area);

    return 0;
}

 int area_of_circle(int area){
        float pi = 3.14;
        int r;
        int power;

        printf("Enter the radius of circle :");
        scanf("%d" , &r);

        power = pow(r,2);
        area = pi * power;

        printf("The area of circle is %d" , area);

        return area;
}