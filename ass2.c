#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    int square;
    int cube;
    printf("Enter num:");
    scanf("%d", &num);
    square = num * num;
    cube = num * num * num;
    printf("the squre is %d\n", square);
    printf("the cube is %d\n", cube);
    return 0;
}
