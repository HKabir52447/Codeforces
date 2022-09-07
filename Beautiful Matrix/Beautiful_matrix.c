#include<stdio.h>
#include<stdlib.h>
int main(){
    int mat[5][5],i,j,move;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(mat[i][j]==1){
                move = abs(2-i) + abs(2-j);
                break;
            }
        }
    }
    printf("%d",move);
}