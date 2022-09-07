#include<stdio.h>
int main(){
    long int n,i,a=0,d=0;
    char str[n];
    scanf("%ld %s",&n,&str);
    for(i=0;i<n;i++){
        if(str[i]=='A'){
            a++;
        }else{
            d++;
        }
    }
    if(a>d){
        printf("Anton\n");
    }
    else if(d>a){
        printf("Danik\n");
    }else{
        printf("Friendship\n");
    }
    return 0;
}