#include <stdio.h>
void swap(int *a,int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
};
int a;
int b;
int main(){
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("swapped values are %d %d",a,b);
    return 0;
}