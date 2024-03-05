#include<stdio.h>
int main(){
    int r,c;
    printf("ENTER ROWS IN MATRIX: ");
    scanf("%d", &r);
    printf("ENTER COLUMNS IN MATRIX: ");
    scanf("%d", &c);
    

    int matrix1[r][c];

    printf("ENTER MATRIX ELEMENTS; \n"); 

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    int max = matrix1[0][0], min = matrix1[0][0], rom=1,com=1, romin=1, comin=1;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(max<matrix1[i][j]){
                max=matrix1[i][j];
                rom=i+1;
                com=j+1;
            }
            if(min>matrix1[i][j]){
                min=matrix1[i][j];
                romin=i+1;
                comin=j+1;
            }
        }
    }
    printf("THE LARGEST ELEMENT IN MATRIX IS %d AND ITS ROW, COLUMN ARE (%d, %d)\n", max, rom, com);
    printf("THE SMALLEST ELEMENT IN MATRIX IS %d AND ITS ROW, COLUMN ARE (%d, %d)", min, romin, comin);

}
