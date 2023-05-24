#include <stdio.h>
int a[5];
int *ptr;
int main(){
    printf("enter 5 nos");
    for(int i = 0; i < 5; i++){
        scanf("%d",&a[i]);
    }
    int i = 0;
    while(i < 5){
      int j = i + 1;
       ptr = &a[i];
       if(*ptr < a[j]){
        ptr = &a[j];
       }
      i++;
    };
    printf("largest number is %d",*ptr);
    return 0;
}
