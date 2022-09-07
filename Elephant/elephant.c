#include<stdio.h>
int main(){
    long int x, step;
    scanf("%ld",&x);
    step = x/5;
    if(x%5 >0){
        step++;
    } 
    printf("%ld",step);
    return 0;
}