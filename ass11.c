#include <stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("ass11.c","r");
    char ch;
    while(ch != EOF){
    ch = fgetc(ptr);
    putchar(ch);
    }
    return 0;
}