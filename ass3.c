#include <stdio.h>
#include <string.h>
char a[] = {"anushka"};
int v = 0;
int c = 0;
int main(){
    for(int i = 0; i < strlen(a); i++){
        if(a[i] == 'a'|| a[i] == 'e'||a[i] == 'i'||a[i] == 'o'||a[i] == 'u'){
            v++;
        }
        else{
            c++;
        }
    }
    printf("%d %d",v,c);
    return 0;
}