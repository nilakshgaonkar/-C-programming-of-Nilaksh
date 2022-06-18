// Q 1) WRITE A PROGRAM TO TAKE STRING AS AN INPUT FROM THE USER USING %C AND %S . CONFORM THAT THE STRINGS ARE EQUAL

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//    char input[50];
//    char input2[50];

//    printf("Enter anything you want :");
//    scanf("%s" , input);

//    printf("Enter anything you want again :");
//    scanf("%s" , input2);

//    int compare = strcmp(input , input2);

//    printf("The diff between input1 and input2 is :%d" , compare);

//     return 0;
// }    















































// Q 2) WRITE YOUR OWN VERSION OF STRLEN FUNCTION FROM <STRING.H>

// #include<stdio.h>
// #include<string.h>

// int Strlen(char *str);

// int main()
// {
//     char string[] = "INDIA";

//     int l = Strlen(string); 
//     printf("the length of this string is :%d" , l);

//     return 0;
    
// }

// int Strlen(char *str){
//     char *ptr = str;
//     int len = 0;
//     while (*ptr != '\0')
//     {
//         len++;
//         ptr++;
//     }
//     return len; 
    
// }
















































// Q 3) WRITE A FUNCTION Slice() TO SLICE A STRING . IT SHOULD CHANGE THE ORIGINAL STRING SUCH THAT IT IS NOW THE SLICED STRING . TAKE M AND N AS THE START AND ENDING POSITION FOR SLICE.

// #include<stdio.h>

// void slice(char *ptr , int m , int n);

// int main()
// {
//     char str[] = "khalnayak";
//     slice(str , 4 , 8);
//     printf("%s" , str);

//     return 0;
// }

// void slice(char *ptr , int m , int n){
//     int i = 0;
//     while ((m+i)<n)
//     {
//         ptr[i] = ptr[i+m];
//         i++;
//     }
//     ptr[i] = '\0';
    
// }


// OR


// #include<stdio.h>

// void slice(char *ptr , int m , int n);

// int main()
// {   
//     int m , n;
//     char str[50];

//     printf("\nn should be greater than m\n\n");

//     printf("Enter a string :");
//     scanf("%s" , str);

//     printf("Enter the value of m :");
//     scanf("%d" , &m);

//     printf("Enter the value of  :");
//     scanf("%d" , &n);

//     slice(str , m , n);

//     printf("The sliced string is :%s" , str);

//     return 0;
// }

// void slice(char *ptr , int m , int n){
//     int i = 0;
//     while ((m+i) < n)
//     {
//         ptr[i] = ptr[m+i];
//         i++;
//     }
//     ptr[i] = '\0';
    
// }



































































// Q 4) WRITE YOUR OWN VERSION OF STRCPY FUNCTION FROM <STRING.H>    

// #include<stdio.h>
// #include<string.h>

// void copy(char *ptr1 , char *ptr2);

// int main()
// {
//     char Name1[] = "Nilaksh";
//     char Name2 [50];

//     strcpy(Name2 , Name1);
//     copy(Name1 , Name2);

//     // printf("The coiped value is :%s" , Name2);

//     return 0;
// }

// void copy(char *ptr1 , char *ptr2){

// }













































// Q 5) TAKE A STRING INPUT FROM THE USER USING %C

// #include<stdio.h>

// int main()
// {   
//     char str[100];
//     char character;
//     int i;

//     printf("Enter a sting :");

//     while (character != '\n')
//     {
//         scanf("%c" , &character);
//         str[i] = character;
//         i++;
//     }
//      str[i] = '\0';
//      puts(str);
    
    
//     return 0;
// }
















































// Q 6) FIND A SALTED FORM OF A PASSWORD ENTERED BY USER IF THE SALT IS "123" AND ADDED AT THE END

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char str1[50]; 
//     char str2[50];

//     printf("Enter a password :");   
//     scanf("%s" , str1);

//     printf("Enter the salt :");
//     scanf("%s" , str2);

//     strcat(str1 , str2);

//     printf("The new password is :%s" , str1);

//     return 0;
// }


// OR


// #include<stdio.h>
// #include<string.h>

// void salting(char *password , char *salt);

// int main()
// {
//     char password[50]; 
//     char salt[50];

//     printf("Enter a password :");   
//     scanf("%s" , password);

//     printf("Enter the salt :");
//     scanf("%s" , salt);

//     salting(password , salt);


//     return 0;
// }

// void salting(char *password , char *salt){
//     char newpassword[100];

//     strcpy(newpassword , password);
//     strcat(newpassword , salt);

//     printf("The newpassword is :%s" , newpassword);

// }


































































// Q 6) WRITE A PROGRAM TO COUNT THE OCCURRENCE OF VOWELS IN A STRING

// #include<stdio.h>

// int vowels(char ptr[]);

// int main()
// {
//     char str[100];

//     printf("Enter a string to cout its voweles :");
//     scanf("%s" , str);

//     printf("Total number of vowels are :%d" , vowels(str));

//     return 0;
// }

// int vowels(char ptr[]){

//     int count = 0;

//   for (int i = 0; ptr[i] != '\0'; i++)
//     {
//         if (ptr[i] == 'a' || ptr[i] == 'e' || ptr[i] == 'i' || ptr[i] == 'o' || ptr[i] == 'u')
//         {
//             count++;
//         }
//     }
//     return count;

    
// }




























































// Q 7) CHECK IF A GIVEN CHARACTER IS PRESENT IN A STRING OR NOT

// #include<stdio.h>

// void check(char *ptr , char ch);

// int main()
// {
//     char str[100];
//     char ch = 'c';

//     printf("Enter a string :");
//     scanf("%s" , str);

//     check(str , ch);

//     return 0;
// }

// void check(char *ptr , char ch){
//     int i;
//     for ( i = 0; ptr[i] != '\0'; i++)
//     {
//         if (ptr[i] == ch)
//         {
//            printf("YES! the character is present\n");
//            return;
//         }
//     }
//     printf("The character is NOT present");
    
// }


























































// Q 8) WRITE A PROGRAM TO CONVERT ALL LOWERCASE VOWELS TO UPPEERCASE IN A STRING
// NOTE --> if you want to convert a lowercase letter into uppercase juse subtract it by 32 


// #include<stdio.h>

//  int main()
//  {
//      char str[100];
//      int i = 0;
//      printf("C program to convert lower case volwel into upper case of String \n");
//      printf("Please enter a string: ");
//      scanf("%[^\n]", str);
//      while( str[i] != '\0' )
//      {
//         if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
//         {
//            str[i] = str[i] - 32;
//         }
//         i++;
//      }
//      printf("Vowel after converting into upper case = %s", str);
//      return 0;
//  }
































































// Q 9) WRITE A PROGRAM TO ENCRYPT A STRING BY ADDING 1 TO THE ASCII VALUE OF ITS CHARACTERS

// #include<stdio.h>

// void encrypt(char *ptr);

// int main()
// {
//     char str[100];

//     printf("Enter a string to get its encrypted value :");
//     scanf("%s" , str);

//     encrypt(str);

//     printf("The encrypted string is :%s" , str);

//     return 0;
// }

// void encrypt(char *ptr){
//     int i = 0; 
    
//     while(ptr[i] != '\0')
//     {
//         ptr[i] = ptr[i] + 1;
//         i++;
//     }
// }







































































// Q 9) WRITE A PROGRAM TO DENCRYPT A STRING BY SUBSTRACTING 1 TO THE ASCII VALUE OF ITS CHARACTERS

// #include<stdio.h>

// void encrypt(char *ptr);

// int main()
// {
//     char str[100];

//     printf("Enter a string to get its dencrypted value :");
//     scanf("%s" , str);

//     encrypt(str);

//     printf("The dencrypted string is :%s" , str);

//     return 0;
// }

// void encrypt(char *ptr){
//     int i = 0; 
    
//     while(ptr[i] != '\0')
//     {
//         ptr[i] = ptr[i] - 1;
//         i++;
//     }
// }































































// Q 10) WRITE A PROGRAM TO COUNT THE OCCURENCE OF A GIVEN CHARACTER IN A STRING

// #include<stdio.h>

// int count(char ptr[] , char ch);

// int main()
// {
//     char str[1000];
//     char ch = 'n';

//     printf("\nEnter a string :");
//     gets(str);

//     printf("The of character %c is :%d" , ch , count(str , ch) );

//     return 0;
// }

// int count(char ptr[] , char ch){
//     int count = 0;
//     for (int i = 0; ptr[i] != '\0'; i++)
//     {
//         if (ptr[i] == ch)
//         {
//             count++;
//         }

//     }
//     return count;
// }

