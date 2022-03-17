#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the array size\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int *a)
{
  printf("enter the numbers\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_composite_numbers(int n,int a[n])
{
  int count=0,sum=0;
  for (int i=1;i<=n;i++)
  {
    if(a[i]%i==0)
  {
    count=count+1;
  }
    if(count>2)
  {
    sum=sum+a[i];
  }
    else
  {
    continue;
  }
    }
  return sum;
}
void out_put(int sum)
{
  printf(" the sum of n composite numbers is %d",sum);
}
int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  out_put(sum);
  return 0;
}

