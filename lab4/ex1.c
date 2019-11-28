#include<stdio.h>
#include<stdlib.h>
#define MAXOP 100
#define NUMBER '0'
int getop(char[]);
void push(double);
double pop(void);
main(){
    int type;
    double op2;
    double op3;
    char s[MAXOP];
    while((type = getop(s))!=EOF){
        switch (type){
            case NUMBER:
            push(atof(s));
            break;
            case'+':
            push(pop()+pop());
            break;
            case'*':
            push(pop()*pop());
            break;
            case'-':
            op2=pop();
            push(pop()-op2);
            break;
            case '%':
			op2 = pop();
			op3 = pop();
			if ((int)op2 == op2  && (int)op3 == op3 && op2 != 0 )
				{
                if((int)op2>0 &&(int)op3>0)
                {push((int)op3%(int)op2);}
                if((int)op2<0 && (int)op3<0)
                {op2=op2*(-1);
                op3=op3*(-1);
                push((int)op3%(int)op2);}
                if((int)op2>0 && (int)op3<0){
                op3=op3*(-1);
                push((int)op3%(int)op2);  
                }
                if((int)op2<0 && (int)op3>0){
                op2=op2*(-1);
                push((int)op3%(int)op2);    
                }
                }

			else
				printf("error\n");
			break;
            case'/':
            op2 = pop();
            if(op2 !=0.0)
            push(pop()/op2);
            else
            printf("error:zero divisor\n");
            break;
            case'\n':
            printf("\t%.8g\n",pop()); 
            break;
            default:
            printf("error:unknown command %s\n",s);
            break;   
        }
    }
    return 0;
}
