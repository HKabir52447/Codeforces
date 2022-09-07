#include<stdio.h>
int main(){
    int t,n,a,b,c,i,j,k,l,count=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        c=n/2;
           for(l=c;l>=1;l--){
            for(j=1;j<c;j++){
            for(k=1;k<c;k++){
                a=k;
                b=j;
                if(a+b==n-l){
                    if(a+b>=l && b+l>=a && l+a>=b){
                       if(b>=a && l>=b){
                         count++;
                        printf("(%d, %d, %d)\n",a,b,l);
                       }
                    }
                }
            }
        }
        if(l<a || l<b){
            break;
        }
        
        } 
           printf("%d\n",count); 
           count = 0;     
    }
    
}
/*#include<stdio.h>
int main(){
    int t,n,a,b,c,i,j,k,count=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        c=n/2;
           for(j=1;j<c;j++){
            for(k=1;k<c;k++){
                a=k;
                b=j;
                if(a+b==n-c){
                    if(a+b>=c && b+c>=a && c+a>=b){
                       if(b>=a){
                         count++;
                        printf("(%d, %d, %d)\n",a,b,c);
                       }
                    }
                }
            }
        }
        c--;        
    }
    printf("%d\n",count);
}*/