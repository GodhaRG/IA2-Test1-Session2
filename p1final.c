#include<stdio.h>
void input (float *base , float *height)
{
  printf("enter base of triangle\n ");
  scanf("%f",base);
  printf("enter height of triangle\n");
  scanf("%f",height);
}
void find_area(float base, float height,float *area)
{
  *area=0.5*(base*height);
}
void output(float base,float height , float area)
{
  printf("the area of triangle with base %f and height %f is %f\n",base,height,area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}