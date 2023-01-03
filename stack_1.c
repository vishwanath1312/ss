#include "stack.h"
#include<stdio.h>
int main(){
	char alpha;
	struct stack s;
	instack (&s);
	int dig,no;
	printf("enter the decimal number\n");
	scanf("%d",&no);
	while(no>0)
	{
		dig=no%16;
		push(&s,dig);
		no=no/16;
	}
	while(!empty(&s))
	{
		dig=pop(&s);
		if(dig>9)
		{
			if(dig==10)alpha='A';
			if(dig==11)alpha='B';
			if(dig==12)alpha='C';
			if(dig==13)alpha='D';
			if(dig==14)alpha='E';
			if(dig==15)alpha='F';
			printf("%c",alpha);
		}
		else
		   printf("%d",dig);
	   }
		clearstack(&s);
	    return 0;
}
