#include<stdio.h>
int main()
{
    int marks;
    float percent;
    int a2;
    printf("enter marks:");
    scanf("%d" ,&marks);
    printf("enter percent:");
    scanf("%f",&percent);

    printf("your marks is%d and your percent is %.2f" ,marks,percent);
    return 0;
}