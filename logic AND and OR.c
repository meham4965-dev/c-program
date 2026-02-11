#include <stdio.h>

int main()
{
    int a=5;
    int b=10;
    int c=0;
    int d=5;
    int e=0;
    int f=0;
    printf("%d",a&&b && a||b);
    printf("\n%d",c&&d && c||d);
    printf("\n%d",e&&f && e||f);
    return 0;
}