#include<stdio.h>
int main(){
    long long int m,n;
    scanf("%lld %lld",&m,&n);
    if(n==1){
        printf("%lld",(m-1)*n);
    } else{
        printf("%lld",m*(n-1));
    }
}