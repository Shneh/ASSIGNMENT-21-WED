#include<stdio.h>
int main(){
    int r,c;
    printf("ENTER ROWS IN MATRIX: ");
    scanf("%d", &r);
    printf("ENTER COLUMNS IN MATRIX: ");
    scanf("%d", &c);
    

    int matrix1[r][c];

    printf("ENTER MATRIX ELEMENTS: \n"); 

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    int t;
    for(int i=0; i<r; i++){
        for(int j=i; j<c; j++){
            t=matrix1[i][j];
            matrix1[i][j]=matrix1[j][i];
            matrix1[j][i]=t;
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c/2; j++){
            t=matrix1[i][j];
            matrix1[i][j]=matrix1[i][r-1-j];
            matrix1[i][r-1-j]=t;
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ", matrix1[i][j]);
        if((j+1)%r==0){
            printf("\n");
        }
        }

    }


}
