#include<stdio.h>
#include<stdlib.h>
int main(){
    int k,n,w,i;
    scanf("%d %d %d",&k, &n, &w);
    for(i=1;i<=w;i++){
        n = (n-k*i);
    }
    if(n>0){
        printf("0\n");
    }else{
        printf("%d\n",abs(n));
    }

    return 0;
}