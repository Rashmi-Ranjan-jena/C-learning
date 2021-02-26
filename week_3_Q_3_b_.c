#include<stdio.h>
int LCM(int x,int y);
int main(){
   int c,d,lcm;
  printf("Value of a is ");
    scanf("%d",&c);
    printf("Value of b is ");
    scanf("%d",&d);
    lcm=LCM(c,d);
    printf("%d",lcm);
}
int LCM(int x,int y)
{
  static int temp = 1;    
    if(temp%x == 0 && temp%y == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        LCM(x,y);
        return temp;
    }
}