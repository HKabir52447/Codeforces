#include<stdio.h>
int main(){
    int n,i,p[100],q[100],b,f1,f2;
    scanf("%d",&n);
    scanf("%d",&f1);
    for(i=0;i<f1;i++){
        scanf("%d",&p[i]);
    }
    scanf("%d",&f2);
    for(i=0;i<f2;i++){
        scanf("%d",&q[i]);
    }
    for(i=0;i<n;i++){
        if(p[i]==n || q[i]==n){
             b = 1; break;
        }else{
             b = 0;
        }
    }
    if(b==1){
        printf("I become the guy.\n");
    }else{
        printf("Oh, my keyboard!\n");
    }
}