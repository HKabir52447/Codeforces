#include<stdio.h>
int main(){
    int t,i;
    scanf("%d",&t);
    while(t--){
        long int a,b;
        int count=0;
        scanf("%ld %ld",&a, &b);
       if(a%b==0){
        printf("0\n");
       }else{
        long int c=a%b;
        printf("%ld\n",b-c);
       }
    }
}