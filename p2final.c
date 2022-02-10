#include<stdio.h>
int input_side()
{
  int x;
  printf("enter the side of the triangle\n");
  scanf("%d",&x);
  return x;
}
int check_scalene(int a, int b,int c)
{
  if(a!=b && a!=c && b!=c)
  {
    return 1;
  }
  return 0;
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene==1)
  {
    printf("the triangle with sides %d,%d,%d is scalene\n",a,b,c);
  }
  else
  {
    printf("the triangle with sides %d,%d,%d is not scalene\n",a,b,c);
  }
}
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}