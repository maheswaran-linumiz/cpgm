			//RPN modulus operator and negative numbers

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define maxop 100
#define num '0'
int getop(char []);
void push(double);
double pop(void);
int main()
{
	int type;
	double op2,k;
	char s[maxop];
	while((type=getop(s))!=EOF)
	{
	  switch(type)
	    {
	   case num:
	   push(atof(s));
	   break;
	   case '+':
	   push(pop() + pop());
	   break;
	   case '*':
	   push(pop() * pop());
           break;
	   case '-':
	     op2=pop();
	      push(pop() - op2);
	      break;
	   case '/':
	     op2=pop();
	     if(op2!=0.0)
             push(pop() / op2);
	     else
		     printf("Error:zero divisor\n");
	     break;
	      case '%':
	      op2=pop();
	      if(op2!=0.0)
	     push(fmod( pop(),op2));
	      else
	      printf("Error:zero divisor\n");
	      break;
	   case '\n':
	     printf("\t%.8g\n",pop());
	     break;
	   default:
	     printf("Error:unknow command %s\n",s);
	     break;
	    }
	}
	return 0;
}

#define max 100		//maximum depth of vale stack
    int sp=0;		//next free stack position
    double val[max];	//value of stack
void push(double f)	//push f onto value stack
{
    if(sp<max)
{
  val[sp++]=f;
}
else
  printf("Error:stack full can't push%g\n",f);
}
double pop(void)	//pop and return top value from stack
{
	if(sp>0)
   return val[--sp];
else
{
  printf("Error:stackempty\n");
  return 0.0;
}
}

#include<ctype.h>		//get next opreator or numeric operand
int getch(void);
void ungetch(int);
	int getop(char s[])
{
	int i,c;
while((s[0]=c= getch()) == ' '|| c =='\t')
	;
 s[1]='\0';
 if(!isdigit(c) && c !='.')
 return c;		// not a number
 i=0;
 if(isdigit(c))			//collect a integer part
 while(isdigit(s[++i]=c=getch()))
 if(c=='.')	//collect a fraction part 
														while(isdigit(s[++i]=c=getch()))
   ;
 s[i]='\0';
 if(c!=EOF)
 ungetch(c);
 return num;
 }

		
#define bufsize 100
char buf[bufsize];		// buffer for ungetch
int bufp=0;			//next free position in buf
int getch(void)			//get a charcter
{
return(bufp > 0)?buf[--bufp]:getchar();
}
void ungetch(int c)		//push character back on input
{
if(bufp>=bufsize)
printf("ungetch:too many charactrers\n");
else
buf[bufp++]=c;
}

