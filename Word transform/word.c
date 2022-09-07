#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int i,sm=0,lg=0;
    char word[100];
    scanf("%s",word);
    for(i=0;i<strlen(word);i++){
        if(islower(word[i])){
            sm++;
        }else{
            lg++;
        }
    }
    /* for(i=0;i<strlen(word);i++){
        if(word[i] >=97 && word[i] <=122){
            sm++;
        }else{
            lg++;
        }
    } */
    /* 😎😎 for(i=0;i<strlen(word);i++){
        if(sm >= lg){
        if(word[i] >=97 && word[i] <=122){
            printf("%c",word[i]);
        }else{
            printf("%c",word[i]+32);
        }
    }else{
       if(word[i] >=65 && word[i] <=90){
            printf("%c",word[i]);
        }else{
            printf("%c",word[i]-32);
        } 
    } */
    for(i=0;i<strlen(word);i++){
        if(sm >= lg){
            char txt;
            txt = tolower(word[i]);
            printf("%c",txt);
        
    }else{
       char txt;
            txt = toupper(word[i]);
            printf("%c",txt);
    } 
    }

}