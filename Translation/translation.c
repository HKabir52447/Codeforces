#include<stdio.h>
#include<string.h>
int main(){
    char s[100],t[100];
    int i,j,count=0;
    scanf("%s %s",&s, &t);
     j=strlen(t)-1;
    for(i=0;i<strlen(s);i++){
        if(s[i]==t[j]){
            count++;
        }
        j--;
    }
    if(count==strlen(s)){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}