#include<stdio.h>
int input_number()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  return n;

}
int is_composite(int n)

{
  int composite=0;
  int i;
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    composite++;
  }
 return composite;
}

void output(int n, int composite)
{
  int i;
  for(i=1;i<n;i++);
  {
    printf("%d",i);

  }
  printf("the number is composite number %d \n",composite);
}

int main()
{
  int n,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
  return 0;
  
}