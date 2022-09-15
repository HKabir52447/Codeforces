#include<stdio.h>
int main(){
    int n,k,m=0,i,time;
    scanf("%d %d",&n,&k);
    time = 240-k;
    for(i=1;i<=n;i++){
        m+=5*i;
        if(m > time) break;
    }
    printf("%d",i-1);
    return 0;
}