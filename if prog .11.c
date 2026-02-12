
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b){
       a=b;
       printf("25 is largest",a);
    }
    else if(a<c){
        a=c;
    }
    
    else{
       printf("25 is not largest",a);
    }

    return 0;
}