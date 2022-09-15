#include<stdio.h>
int main(){
    long long int t,n;
    scanf("%lld",&t);
    while(t--){
        long int a,b;
        scanf("%ld",&a);
        b = a/2 + 1;
        printf("%ld\n",a-b);
    }
    return 0;
}