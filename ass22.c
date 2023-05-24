#include <stdio.h>
FILE *ptr1;
FILE *ptr2;
int main(){
    ptr1 = fopen("abc.txt","r");
    ptr2 = fopen("copy.txt","w");
    char ch = fgetc(ptr1);
    while(ch != EOF){
        fputc(ch,ptr2);
        ch = fgetc(ptr1);
    };
    return 0;
}