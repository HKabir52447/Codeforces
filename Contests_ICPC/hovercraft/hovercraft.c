#include<stdio.h>
int main(){
    int l,w;
    double min, temp;
    scanf("%d %d",&l, &w);
    temp = (double) l/4;
    min = (double)l + w - temp;
    printf("%.4lf",min);
    return 0;
}