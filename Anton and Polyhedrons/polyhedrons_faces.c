#include<stdio.h>
#include<string.h>
int main(){
    long int n,faces=0;
    char str1[] = "Tetrahedron", str2[] = "Cube", str3[] = "Octahedron", str4[] = "Dodecahedron", str5[] = "Icosahedron";
    scanf("%ld",&n);
    while(n--){
        char str[100];
        scanf("%s",&str);
        if(strcmp(str,str1)==0) faces+=4;
        if(strcmp(str,str2)==0) faces+=6;
        if(strcmp(str,str3)==0) faces+=8;
        if(strcmp(str,str4)==0) faces+=12;
        if(strcmp(str,str5)==0) faces+=20;
    }
    printf("%ld\n",faces);
    return 0;
}