#include <stdio.h>
int main(){
    int n,i,ex,en,capacity=0,temp=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&ex, &en);
        temp += en - ex;
        if(temp > capacity){
        capacity = temp;
        } 
    }
    printf("%d\n", capacity);
    return 0;
}