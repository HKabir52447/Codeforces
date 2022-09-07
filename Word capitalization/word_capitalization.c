#include<stdio.h>
#include<string.h>
int main(){
    char word[1000];
    scanf("%s",&word);
    if(word[0] >= 65 && word[0] <=90){
        printf("%s",word);
    }else{
        word[0]= word[0] - 32;
        printf("%s",word);
    }
}