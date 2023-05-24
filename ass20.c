#include <stdio.h>
int main(){
    int l = 0;
    FILE *ptr;
    ptr = fopen("me.txt","r");
    char ch;
    while((ch = fgetc(ptr)) != EOF){
        if(ch == '\n'){
            l++;
        }
    };
    printf("%d",l);
    
    return 0;
    }
