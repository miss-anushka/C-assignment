#include <stdio.h>
char source[20];
char target[20];
int main(){
    printf("enter string");
    scanf("%s",source);
    int i = 0;
    while(source[i] != '\0'){
        target[i] = source[i];
        i++;
    }
    printf("%s",target);
    return 0;
}