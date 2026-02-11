#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='1'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='o'||a=='u'){
        printf("Vowels");
    }
    else{
        printf("constants");
        return 0;
    }
}