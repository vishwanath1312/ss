#include"ctype.h"
#include"stack.h"
#include<stdio.h>
int main() {
	int i,j;
	char postfix[100];
	int datavalues[100];
	char item;
	struct stack s;
	instack(&s);
	printf("enter the postfix\n");
	gets(postfix);
	i=0,j=0;
	while(item!='\0')
	{
		if(isalpha(item));
		{
			printf("enter the values\n");
			scanf("%d",&datavalues[j++]);
		}
		item=postfix[i++];
	}
	return 0;
}


