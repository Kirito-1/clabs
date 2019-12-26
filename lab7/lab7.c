#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[]){
    int a[100];
    int b =1;
    int c = 0;
    for(b=1;b<argc;b++,c++){
        a[c]=atof(argv[b]);
    }
    int j=0;
    int temp;
    for(j=0;j<argc-2;j++){
     if(a[j]<a[j+1]) 
 {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;}
}
printf("The min number is：%d\n",a[argc-2]);
return 0;
}