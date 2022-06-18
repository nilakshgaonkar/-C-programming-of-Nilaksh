// A PROGRAMME TO FIND THE AREA OF RECTANGLE

#include<stdio.h>

int area_of_rectangle(int area);

int main()
{
   int area;
   
   area_of_rectangle(area);

    return 0;
}

int area_of_rectangle(int area){
    int w;
    int l;

    printf("Enter the width of the rectangle :");
    scanf("%d" , &w);

    printf("Enter the length of the rectangle :");
    scanf("%d" , &l);

    area = l * w ;

    printf("The area of ractangle is :%d" , area);

    return 0;

}
