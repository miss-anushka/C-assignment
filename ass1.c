#include <stdio.h>
typedef struct student{
    char name[20];
    int age;
}std;
int main(){
    std s;
    printf("enter name and age of student");
    scanf("%s %d", s.name,&s.age);
    printf("name and age of student are %s and %d",s.name,s.age);
    return 0;
}