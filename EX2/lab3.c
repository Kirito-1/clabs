#include <stdio.h>
#include <stdlib.h>
main(){

    int c[4];
    int b = 0;
    int x;
    c[b] = getchar();
    while (c[b] !='\n'){

       c[b] = c[b] - '0';
       b++;
      c[b] = getchar();
    }
    if(b == 1)
    {x = c[0];}
    else if(b == 2)
    {x = c[0]*10 + c[1];}
    else if(b == 3)
    {x = c[0]*100 + c[1]*10 + c[2];}
    else if(b == 4)
    {x = c[0]*1000 + c[1]*100 + c[2]*10 + c[3];}
    else if(b == 5)
    {x = c[0]*10000 + c[1]*1000 + c[2]*100 + c[3]*10 + c[4];}
    else{exit(0);}
      int n = x;
      int count = 0;
    while(n != 0) {
        n = n & (n-1);
        count++;
    }
    printf("%d\n",count);

}
