#include <stdio.h>

int a[5];
int *ptr;

int main() {
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    ptr = &a[0]; 

    for (int i = 1; i < 5; i++) {
        if (*ptr < a[i]) {
            ptr = &a[i];
        }
    }

    printf("The largest number is %d\n", *ptr);

    return 0;
}