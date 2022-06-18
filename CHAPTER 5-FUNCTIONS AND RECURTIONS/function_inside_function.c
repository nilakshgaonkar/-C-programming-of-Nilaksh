// A ROGRAMME OF PUTTING FUNCTIONS INSIDE A FUNCTIONS
// AND THIS IS ALSO VALID

#include<stdio.h>

void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main()
{
    int i;

    GoodMorning();

    return 0;
}

void GoodMorning(){
    printf("Hello! Good Morning Nilaksh how are you?\n");
    GoodAfternoon();
}

void GoodAfternoon(){
    printf("Hello! Good Afternoon Nilaksh how are you?\n");
    GoodNight();
}

void GoodNight(){
    printf("Hello! Good Night Nilaksh how are you?\n");
}