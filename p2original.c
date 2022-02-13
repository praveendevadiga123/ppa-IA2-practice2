#include<stdio.h>

struct _complex
 {
    float real,imaginary;
};


typedef struct _complex Complex;
struct _complex a;
Complex a;

int input_n()
{
  int n;
  printf("Enter number of Complex numbers\n");
  scanf("%d", &n);
  return n;
}

Complex input_complex()
{
  Complex c;
  printf("Enter the real and imaginary value of Complex number\n");
  scanf("%f %f", &c.real, &c.imaginary);
  return c;
}

void input_n_complex(int n, Complex c[n])
{
  for(int i = 0; n>i; i++)
  {
    printf("Enter real and imaginary value of Complex number:\n");
    scanf("%f %f", &c[i].real, &c[i].imaginary);
  }
}

Complex add(Complex c1, Complex c2)
{
  Complex c;
  c.real = c1.real + c2.real;
  c.imaginary = c1.imaginary + c2.imaginary;
  return c;
}

Complex add_n_complex(int n, Complex c[n])
{
  Complex sum={0,0};
  for(int i = 0; n>i; i++)
  {
    sum = add(sum, c[i]);
  }
  return sum;
}

void output(int n, Complex c[n], Complex sum)
{
  for(int i=0; n-1>i; i++)
  {
    printf("%f+%fi\n",c[i].real, c[i].imaginary);
    
  }
printf("(%f+%fi) is (%f+%fi)\n",c[n-1].real,c[n-1].imaginary,sum.real,sum.imaginary);
    
}
int main()
{
  int n;
  n = input_n();
  Complex c[n];
  input_n_complex(n, c);
  Complex sum = add_n_complex(n, c);
  output(n, c, sum);
  return 0;
}