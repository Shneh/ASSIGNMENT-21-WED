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
    int r1, r2, t ;
    printf("ENTER THE ROW YOU WANT TO SWAP: ");
    scanf("%d", &r1);
    printf("ENTER THE ROW YOU WANT TO SWAP WITH: ");
    scanf("%d", &r2);

    int small=r1 , big=r2;
    if(r2<small){small=r2; big=r1;}
    
    
        for(int j=0; j<c; j++){
            t=arr[small-1][j];
            arr[small-1][j]=arr[big-1][j];
            arr[big-1][j]=t;
        }
    
    printf("NEW MATRIX: \n");
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d ", arr[i][j]);
            if(j+1==r){
                printf("\n");
            }
        }
    }
    return 0;
}
