#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char a[100],b[100];
    int i,count=0;
    scanf("%s %s",&a,&b);
    int size = strlen(a);
    
    for(i=0;i<size;i++){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
        if(a[i] < b[i]) {printf("-1"); break;}
        if(a[i] > b[i]) {printf("1");break;}
        if(a[i]==b[i]) count++;
    }
    if(count==size) printf("0");
}