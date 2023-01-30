#include <stdio.h>
int main()
{
    char name[10];
    char address[10];
    int age;
    char date[10];

    printf("Enter Your Name:");
    scanf("%s", &name);
    printf("Enter Your Addreaa:");
    scanf("%s", &address);
    printf("Enter Your Age:");
    scanf("%d", &age);
    printf("Enter Your BirthDate:");
    scanf("%s", &date);
    printf("Your Name Is: %s\nYour Address Is:%s\nYour Age Is:%d\nYour Birthdate Is:%s", name, address, age, date);
}