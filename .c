#include<stdio.h>
int main()
{
int x,y;
printf("enter values x,y:\n");//let value of x=4 and y=8
scanf("%d%d",&x,&y);
x=x+y;//x=4+8=12
y=x-y;//y=12-8=4
x=x-y;//12-4=8
printf("after swapping numbers are:\n");
printf("%d\n%d",x,y);
return 0;
}
