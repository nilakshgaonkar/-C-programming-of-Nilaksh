#include<stdio.h>

int main()
{
    int a = 1;
    // while (a<=20)
    // {
    //     printf("%d\n" , a+1);
    //     a++;
    //     if(a==10){
    //         break;
    //     }
    // }
    
    while (a<30)
    {
        printf("%d\n" , a);
        a++;
        if(a>20){
            break;
        }
    }
    
    return 0;
}