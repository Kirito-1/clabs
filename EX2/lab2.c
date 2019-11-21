#include<stdio.h>
#include<string.h>
int strindex (char s[], char t[])
{
int x,y,z,C, pos=0;
for(x = 0;s[x] !='\0'; x++){
for(y = x,z=0; t[z]!='\0'&& s[y]==t[z];y++,z++);
if(t[z]=='\0'){
pos=x+1;
}
}
if(pos >0)
return (pos-1+C-1);
return -1 ;
}
main( ){
char a[100];
char b[100];
printf("please input the chain of characters\n");
scanf("%S %S", a,b);
printf( "%d\n" ,strindex(b,a));
}