#include<stdio.h>
int main(){
    int y,d1,d2,d3,r1,r2,r3;
    scanf("%d",&y);
    while(1){
        y++;
        r1=y%10;
        d1=y/10;
        r2=d1%10;
        d2=d1/10;
        r3=d2%10;
        d3=d2/10;
        if(r1 != r2 && r1 !=r3 && r1!=d3 && r2!=r3 && r2!=d3 && r3!=d3){
            printf("%d\n",y);
            break;
        }
    }
    return 0;
}