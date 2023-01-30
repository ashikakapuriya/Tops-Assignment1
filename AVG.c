#include <stdio.h>
#include <math.h>
int main()
{
    float a = getAvg();
    printf("Your Avarage is: %f", a);
}

int getAvg()
{
    int number1;
    int number2;
    printf("enter Number 1:");
    scanf("%d", &number1);
    printf("enter Number 2:");
    scanf("%d", &number2);

    float avg;
    avg = (number1 + number2) / 2;
    return avg;
}