#include <stdio.h>
#include <string.h>
char a[20];
char ch;
int f = 0;
int main(){
    printf("enter a stringand a character");
    scanf("%s %c",a,&ch);
    for(int i = 0; i < strlen(a); i++){
        if(a[i] == ch){
            f++;
        };
    };
    printf("%d",f);
return 0;
}