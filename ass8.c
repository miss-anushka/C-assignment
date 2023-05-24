#include <stdio.h>
int a[5];
int result = 0;
int main(){
    printf("enter 5 nos");
    for(int i = 0; i < 5; i++){
        scanf("%d",&a[i]);
    };
    for(int i = 0; i < 5; i++){
        result = result + a[i];
    };
    int average = result/5;
    printf("average is %d",average);
    return 0;
}