  
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c){
    printf("equilateral tringle");
    }
    else if(a==b||b==c||a==c){
        printf("isosceles tringle");
    }
    else{
        printf("scalene tringle");
    }

    return 0;
}