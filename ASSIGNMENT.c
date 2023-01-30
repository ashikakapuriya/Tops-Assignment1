#include <stdio.h>
int main()
{
    char name[10];
    char add[10];
    int age;
    char birthdate[10];
    printf("enter name:");
    scanf("%s", name);
    printf("enter add:");
    scanf("%s", add);
    printf("enter age:");
    scanf("%d", &age);
    printf("enter birthdate:");
    scanf("%s", &birthdate);
    printf("your name is:%s\n your address is:%s\n your age is:%d\n your birthdate is:%s", name, add, age, birthdate);
    return 0;
}