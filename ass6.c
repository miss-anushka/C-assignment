#include <stdio.h>
int a[3][3];
int b[3][3];
int c[3][3];
void multiply(int a[3][3],int b[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k< 3; k++){
                c[i][j] = c[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf(" %d",c[i][j]);
        }
        printf("\n");
    }
};
int main(){
    printf("enter elements of first matrix");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter elements of second matrix");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d",&b[i][j]);
        }
    }
    multiply(a,b);
    return 0;

}