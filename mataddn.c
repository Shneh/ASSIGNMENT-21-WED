#include<stdio.h>
int main(){
    int r,c;
    printf("ENTER ROWS IN MATRIX: ");
    scanf("%d", &r);
    printf("ENTER COLUMNS IN MATRIX: ");
    scanf("%d", &c);
    

    int matrix1[r][c],matrix2[r][c];

    printf("ENTER FIRST MATRIX ELEMENTS; \n");

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("ENTER SECOND MATRIX ELEMENTS; \n");

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }
    int summatrix[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            summatrix[i][j]=matrix1[i][j]+matrix2[i][j];
            printf("%d ", summatrix[i][j]);

            if((j+1)%r==0){
                printf("\n");
            }
        }
    }


}
