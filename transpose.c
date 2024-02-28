#include<stdio.h>
int main(){
    int r, c;
    printf("ENTER ROW AND COLUMNS: ");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    printf("ENTER MATRIX ELEMENTS: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("ENTER (%d, %d) ELEMENT: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    int transpose[c][r];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            transpose[i][j]=arr[j][i];
        }
    }
    printf("TRANSPOSED MATRIX IS: \n");
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d ", transpose[i][j]);
            if(j+1==r){
                printf("\n");
            }
        }
    }
    return 0;
}
