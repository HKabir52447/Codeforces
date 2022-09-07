#include<stdio.h>
int main(){
    long long int n,m,a,n1,n2;
    scanf("%lld%lld%lld",&n,&m,&a);
    if(n%a==0){
        n1 = n/a;
    } else{
        n1 = n/a + 1;
    }
    if(m%a==0){
        n2 = m/a;
    } else{
        n2 = m/a + 1;
    }
    printf("%lld",n1*n2);
    

}