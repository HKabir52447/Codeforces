#include<stdio.h>
#include<math.h>
int main(){
    long long int n,sum;
    scanf("%lld",&n);
    if(n%2 == 0){
        sum = n/2;
    }else{
        sum = -(n+1)/2; 
    }
    printf("%lld",sum);
}