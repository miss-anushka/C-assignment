#include <stdio.h>

char a[20] = "anushka mishra";

int main() {
    int i = 0;
    int j = 0;

    while (a[i] != '\0') {
        if (a[i] != ' ') {
            a[j] = a[i];
            j++;
        }
        i++;
    }

    a[j] = '\0';

    printf("Modified string: %s\n", a);

    return 0;
}