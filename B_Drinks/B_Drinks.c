#include<stdio.h>
int main(){
    int n,p[n],i,sum=0;
    printf("Enter : ");
    scanf("%d",&n);
    for(i=0;i< n;i++){
        scanf("%d",&p[i]);
    }

    for(i=0;i<n;i++){
        sum += p[i];
    }
    printf("%f",sum/n);

return 0;
}
