#include <stdio.h>
int main(){
    FILE *ptr;
   ptr =  fopen("abc.txt","w");
    fprintf(ptr,"hello everyone");
    return 0;
}