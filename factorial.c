#include<stdio.h>
int fact(int n)
{
    int val = 1;
    for (int i = n; i > 1; i--)
    {
        val *= i;
    }
}
void main()
{
  int n,factorial;
  printf("Enter the number: ");
  scanf("%d", &n);
  factorial = fact(n);
  printf("The factorial of %d is %d: ",n,factorial);
}