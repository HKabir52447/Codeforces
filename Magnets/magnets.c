#include<stdio.h>
int main(){
    long int n,count=0,i;
    int m[100000];
    scanf("%ld",&n);
   for(i=0;i<n;i++){
        scanf("%d", &m[i]);
    }
    for(i=0;i<n;i++){
        if(m[i]!=m[i+1])
        count++;
    }
    printf("%d\n",count);
}