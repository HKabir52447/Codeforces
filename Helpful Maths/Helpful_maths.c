#include<stdio.h>
#include<string.h>
int main(){
    char temp;int i,j,k;
    char str[100];
    scanf("%s",str);
   for(i=0;i<strlen(str);i+=2){
        for(j=i+2;j<strlen(str);j+=2){
            if(str[i]>str[j]){
                temp = str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
   }
   for(k=0;k<strlen(str);k++){
     printf("%c",str[k]);
   }
   
}