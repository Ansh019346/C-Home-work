#include<stdio.h>
int main()
{
  int a,b,c,d;
  printf("enter the value of a,b,c and d = ");
  scanf("%d%d%d%d",&a,&b,&c,&d);

  if(a>b && a>c && a>d)
  printf("a is greatest");

  if(b>a && b>c && b>d)
  printf("b is greatest");


  if(c>a && c>b && c>d)
  printf("c is greatest");


  else
  printf("d is greatest");

}
