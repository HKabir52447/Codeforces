#include<stdio.h>
int main(){
    int n,k,i,j,count=0;
    int mark[100];
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++){
        scanf("%d",&mark[i]);
    }
    for(i=1;i<=n;i++){
        if(mark[i] >=mark[k] && mark[i] > 0){
            count++;
        }
        
    }
    printf("%d",count);
}