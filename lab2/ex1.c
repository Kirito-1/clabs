#include <stdio.h>
int main()
{
    unsigned int a = 1;
    int b = 0;
    while (a !=0)
    {
        a=a<<1;
        b=b+1; 
    }
    printf("the amount is %d\n",b);
    printf("the max is%u\n",a-1);
    return 0;
}