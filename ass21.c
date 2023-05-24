#include <stdio.h>
#include <string.h>

char ch[50] = "anushka mishra";

int main() {
    printf("%c", ch[0]);  

    for (int i = 1; i < strlen(ch); i++) {
        if (ch[i] == ' ') {  
            printf("%c", ch[i + 1]);  
        }
    }

    printf("\n");

    return 0;
}