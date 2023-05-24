#include <stdio.h>
#include <stdlib.h>
int main(){
    int *a = (int *)malloc(5*sizeof(int));
    printf("enter 5 nos");
    for(int i = 0; i < 5; i++){
        scanf("%d",&a[i]);
    };
    int i,max;
    for( i = 0; i < 4; i++){
        max = i;
        for(int j = i+1; j < 5; j++){
            if(a[i] < a[j]){
                max = j;
            }
        }
    }
    printf("maximum number is %d",a[max]);
    return 0;
}