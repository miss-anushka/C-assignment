#include <stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("abc.txt","r");
    char ch[100];
   fgets(ch,sizeof(ch),ptr);
    printf("%s",ch);
    return 0;
}