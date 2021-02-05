#include<stdio.h>
int main(){
    char latter;
    printf("Enter a latter");
    scanf("%c",&latter);
    switch(latter)
    {
        case 'a':printf("vowel");
        break;
         case 'e':printf("vowel");
        break;
         case 'i':printf("vowel");
        break;
         case 'o':printf("vowel");
        break;
         case 'u':printf("vowel");
        break;
        default:printf("Consonant");
    }    
    return 0;
}