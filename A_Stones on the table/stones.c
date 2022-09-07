#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j,count=0;
    char s[50];
    scanf("%d\n",&n);
    gets(s);
    for(i=0;i<n;i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }

    printf("%d",count);

    return 0;
}