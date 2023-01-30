#include<stdio.h>
int main()
{
    int a , b;
    printf("enter number1:");
    scanf("%d",&a);
    printf("enter number2:");
    scanf("%d",&b);
    int add = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = (float)a / (float)b;
    int mod = a%b;
    printf("addition=%d\nsubstaction=%d\nmultiplication=%d\ndivison=%.2f\nmodule=%d\n",add,sub,mul,div,mod);
    return 0;
}
