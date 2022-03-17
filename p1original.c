
#include<stdio.h>


void input(float *base, float *height)
{
  printf("enter a base and height of triangle\n");
  scanf("%f%f",base,height);
}
void find_area(float base , float height, float *area)
{
  *area=0.5*base*height;
}
void output(float base, float height, float area)
{
  printf("the area of triangle is %f * %f is =%f",base,height,area );
}
int main()
{
  float b,h,a;
  input(&b,&h);
  find_area(b,h,&a);
  output(b,h,a);
  return 0;
}