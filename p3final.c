#include<stdio.h>
int input_number()
{
  int x;
  printf("enter a number\n");
  scanf("%d",&x);
  return x;
}
int is_composite(int n)
{
  int count=0;
  for (int i=1;i<=n;i++)
  {
    if(n%i==0)
    count=count+1;
  }
  if(count>2)
  {
    return 1;
  }
  else 
  {
    return 2;
  }
}
void output(int n,int composite)
{
  if(composite==1)
  {
    printf("%d is a composite number\n",n);
  }
  else
  {
    printf("%d is not a composite number\n",n);
  }
}
int main()
{
  int n,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
  return 0;
}