#include <stdio.h>

int input_number()
{
  int n;
  printf("Enter size\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  for(int i = 2; i <= n/2; i++)
  {
    if(n%i == 0)
      return 1;
  }
  return 0;
}

int sum_composite(int n, int a[n])
{
  int sum = 0;
  for (int i=0;i<n;i++)
  {
    if ( iscomposite(a[i]))
    {
      sum = sum + a[i];
    }
  }
  return sum;
}

void output(int s)
{
  printf("sum of composite number is %d\n",s)
}