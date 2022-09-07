#include<stdio.h>
int main(){
    int n, x=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        char ex[4];
        scanf("%s",ex);
        if(ex[1]=='+'){
            x++;
        } else{
            x--;
        }
    }
    printf("%d\n",x);

    return 0;
}