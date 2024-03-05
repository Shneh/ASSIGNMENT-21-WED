#include<stdio.h>
int main(){
    int m,n,p,q;
    printf("ENTER ROWS IN MATRIX 1: ");
    scanf("%d", &m);
    printf("ENTER COLUMNS IN MATRIX 1: ");
    scanf("%d", &n);
    
    int matrix1[m][n];

    printf("ENTER MATRIX ELEMENTS: \n"); 

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("ENTER ROWS IN MATRIX 2: ");
    scanf("%d", &p);
    printf("ENTER COLUMNS IN MATRIX 2: ");
    scanf("%d", &q);
    
    int matrix2[p][q];

    printf("ENTER MATRIX ELEMENTS: \n"); 

    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    int mul[m][q];

    if(n!=p){
        printf("MATRIX MULTIPLICATION NOT POSSIBLE.");
    }
    else
    {   for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                int sum=0;
                for(int k=0; k<p; k++){
                    sum=sum+(matrix1[i][k]*matrix2[k][j]);
                }
                mul[i][j]=sum;
            }
        }


        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                printf("%d ", mul[i][j]);
                if((j+1)%m==0){
                    printf("\n");

                }
            }
        }
    } 
}
