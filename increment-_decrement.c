#include<stdio.h>
int main()
{ 
    int a= 10;
    int b= 15;
    int c=5;
    int d=4;
    int e= a++ + ++b - c++ * d++;
    printf("%d" ,c);
    return 0;

}