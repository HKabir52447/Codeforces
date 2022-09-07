#include<stdio.h>
int main(){
    long long int n,i; long int count=0;
    scanf("%lld",&n);
    for(i=0; n!=0;i++){
        if (n % 10 == 4 || n % 10 == 7)
        {
           count++;
        }
        n /= 10;
    }
    if(count == 4 || count == 7){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}