#include<stdio.h>
int main(){
    int n,temp,count=0,t;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&temp);
        count+=temp;
    }
   if(count == 0){
    printf("Easy\n");
   }else{
    printf("Hard\n");
   }
}