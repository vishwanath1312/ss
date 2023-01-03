#include<stdio.h>
#include<stdlib.h>
#define MAX 200
#define true 1
#define false 0
 
 struct stack //declaration
 {
    int top;
    int items[MAX];
 };
  struct stack s; //initialization

  void instack(struct stack *);//function prototype
  int empty(struct stack *);
  int full(struct stack *);
  void push(struct stack *,int);
  int pop(struct stack *);
  int stacktop(struct stack *);
  int stackcount(struct stack *);
  void printstack(struct stack *);
  void clearstack(struct stack *);
 
  void intstack(struct stack *ps);//function header and body
  void clearstack(struct stack *ps);

  void instack(struct stack *ps)
  {
	 ps->top=-1;
	 return;
  }
int empty(struct stack *ps)
{
	 if(ps->top==-1)
     {
		 return(true);
	 }
     else
     {
		  return(false);
     }
}
int full(struct stack *ps)
{
	
    if(ps->top==MAX-1)
   {
	     return(true);
    } 
    else
    {
         return(false);
     }
}
void push(struct stack *ps,int x)
{
	 if(full(ps))
     {
		  printf("stack is full\n");
	      exit(1);}
	     ps->items[++ps->top]=x;
         return;
}
int pop(struct stack *ps)
{
	if (empty(ps))
   {
	   printf("stack is empty\n");
       exit(1);
   }
      return(ps->items[ps->top--]);
}
int stacktop(struct stack *ps)
{
	if(empty(ps))
    {
		printf("empty elements");
	    exit(1);
	 }
    return (ps->items[ps->top]);
}
int stackcount(struct stack *ps)
{ 
	if(empty(ps))
	{
		printf("under flow");
		exit(1);
	}
	return(ps->top++);
}
void printstack(struct stack *ps)
{
	
	int i;
	if(empty(ps))
	{
		printf("under flow\n");
		exit(1);
	}
	 for(i=ps->top;i>=0;i--)
	 printf("%d",ps->items[i]);
	 return ;
}
void clearstack(struct stack *ps)
{
    	ps->top=-1;
    	return;
}
	
    
		
 
