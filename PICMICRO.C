#include<stdio.h>
#include<conio.h>
main()
{
int d;
clrscr();
printf("select the caculator\n 1=add\n2=subt\n3=mult\n4=div\n5=avgof5\n6=inr-usd");
scanf("%d",&d);
switch(d)
{
case 1:
add();
break;
case 2:
subt();
break;
case 3:
mult();
break;
case 4:
div();
break;
case 5:
avgof5();
break;
case 6:
inr_usd();
break;
default:
printf("invalid number");
break;
}
getch();
}
add()
{
int a,b,c;
clrscr();
printf("enter two numbers");
scanf("%d%d",&a,&b);
c=a+b;
printf("the answer is %d",c);
}
subt()
{
int a,b,c;
clrscr();
printf("enter two numbers");
scanf("%d%d",&a,&b);
c=a-b;
printf("the answer is %d",c);
}
mult()
{
int a,b,c;
clrscr();
printf("enter two numbers");
scanf("%d%d",&a,&b);
c=a*b;
printf("the answer is %d",c);
}
div()
{
int a,b,c;
clrscr();
printf("enter two numbers");
scanf("%d%d",&a,&b);
c=a/b;
printf("the answer is %d",c);
}
avgof5()
{
int a,b,c,e,f,g;
clrscr();
printf("enter five numbers");
scanf("%d%d%d%d%d",&a,&b,&g,&e,&f);
c=(a+b+g+e+f)/5;
printf("the answer is %d",c);
}
inr_usd()
{
int b,c;
clrscr();
printf("enter the cash");
scanf("%d",&b);
c=71*b;
printf("the answer is %d",c);
}

