#include<stdio.h>
#include<string.h>
int main() {
    int n,i,len;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        char str[100];
        scanf("%s",str);
        len = strlen(str);
        if(len <= 10){
            printf("%s\n",str);
        }else{
            printf("%c%d%c\n",str[0],len - 2,str[len-1]);
        }
    }
    return 0;
}