#include<stdio.h>
void input(int *n, int *r)
{
  printf("Enter the value of n and r:\n");
  scanf("%d%d",n,r);
}

int fact(int n)
{
  int i,f=1;
    for(i=1;i<=n;i++){
      f=f*i;
    }
  return f;
}  

int ncr(int n,int r)
{
  int x;
  x=fact(n)/(fact(r)*fact(n-r));
  return x;
}

void output(int n,int r,int ncr)
{
  printf("Value of %dC%d = %d\n",n,r,ncr);
}

int main()
{
  int n,r,x;
  input(&n,&r);
  x=ncr(n,r);
  output(n,r,x);
  return 0;
}