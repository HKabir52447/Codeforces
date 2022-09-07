#include<stdio.h>
int main(){
    long int n, k,i;
    scanf("%ld %ld",&n,&k);
    while(k--){
        if(n%10 >0){
            n--;
        }else{
            n/=10;
        }
    }
    printf("%ld\n",n);
}