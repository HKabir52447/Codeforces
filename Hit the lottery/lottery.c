#include<stdio.h>
int main(){
    long int n,count,a,b,c,d,e,f,g,h;
    scanf("%ld",&n);
    e = n/100; a = n%100;
    f = a/20; b = a%20;
    g = b/10; c = b%10;
    h = c/5; d = c%5;
    count= e + f + g + h+ d;  
    printf("%ld",count);
}