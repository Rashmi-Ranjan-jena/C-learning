#include<stdio.h>
#include<string.h>
int main(){
    char word[100];
    int count=1;
    printf("Enter a word::");
    scanf("%s",&word[100]);
    for(int i=0;word[i]!=0;i++){
        if(word[i]==' '||word[i]=='\n'||word[i]=='\t'){
            count++;
        }
    }
    printf("Total number of latter in the words is :%d",count);
    return 0;
}