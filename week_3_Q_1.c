#include<stdio.h>
int square(int number);
int main(){
    int n,c;
    printf("Enter number :: ");
    scanf("%d",&n);
    c=square(n);
    printf("Square of the number is %d",c);
    return 0;
}
int square(int number){
    int result;
    result=number*number;
    return result;
}