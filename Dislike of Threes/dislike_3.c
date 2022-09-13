#include<stdio.h>
int main(){
    int t,i,j=0,m;
    int temp[1001];
    scanf("%d",&t);
    for(i=1;i<=1666;i++){
        if(i%3==0){
            continue;
        }if(i%10==3){
            continue;
        }else{
            temp[j]=i;
            j++;
        }
    }
    while(t--){
        int k;
        scanf("%d",&k);
        printf("%d\n",temp[k-1]);
    }
    
}