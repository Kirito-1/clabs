#include<stdio.h>
int main()
{
    unsigned int q=1;
    unsigned int p=0;
    while(q>0)
    {
        q=q<<1;
        p=p+1;
    
    }
    printf("MAX:%a DIGIT:%a\n",q-1,p);
}