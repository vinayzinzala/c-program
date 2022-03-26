#include<studio.h>
int main()
{
int a,b,c;
char op;
printf("enter two number");
scanf(" %d %d", &a,&b);
printf("Enter choice");
printf("+ for addition");
printf("- for substraction");
printf("* for multiplication");
printf("/ for division");
printf(" %% for modulus");
scanf(" %c",&op);
if (op=='+')
{
c=a+b;
}
else if (op=='-')
{
c+a-b;
}
else if (op=='*')
{
c=a*b;
}
else if (op=='/')
{
if (b==0)
  {
  printf("enter any non-zero value");
  }
  else
  {
   c=a/b
  }
 }
else if (op=='%')
{
if (b==0
{
printf("enter a non-zero value")
}
else
{
c=a % b;
 }
}
else
{
printf(" enter a value choice");
}
printf("output is %d",c);
return 0;
}
