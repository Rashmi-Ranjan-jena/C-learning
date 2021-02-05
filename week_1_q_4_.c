#include <stdio.h>
int main()
{
    float phy,che,bio,math,comp;
    float avg;
    float percentage;
    printf("Enter the mark of physics");
    scanf("%f", &phy);
     printf("Enter the mark of chemistry");
    scanf("%f", &che);
     printf("Enter the mark of biology");
    scanf("%f", &bio);
     printf("Enter the mark of mathematics");
    scanf("%f", &math);
     printf("Enter the mark of computer");
    scanf("%f", &comp);
    avg=(phy+che+bio+math+comp)/5;
    printf("The total percentage is %f ",avg);
    if(avg>=90){
        printf("Grade A");
    }
    if(avg<90 && avg>=80){
        printf("Grade B");
    }
    else if(avg<80 && avg>=70){
        printf("Grade C");
    }
    else if(avg<70 && avg>=60){
        printf("Grade D");
    }
    else if(avg<60 && avg>=40){
        printf("Grade E");
    }
    else if(avg<40){
        printf("Grade F");
    }
    return 0;
}    