#include<stdio.h>

int main()
{
    int only = 10;
    int i = 0;

    while (i<20)
    {
        i++;
        
        if(i!=only){
            continue;
        }
        else{
            printf("The value is %d\n" , i);
        }
        break;
    }
    

    return 0;
}