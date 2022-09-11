#include<stdio.h>
int main(){
    int n,h,w=0;
    scanf("%d %d",&n, &h);
    while(n--){
        int value;
        scanf("%d",&value);
        if(value>h){
            w+=2;
        }else{
            w++;
        }
    }
    printf("%d",w);
}