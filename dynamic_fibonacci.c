#include <stdio.h>

int num(int n)
{
    int f[n];
    int i;
    f[0]=0;
    f[1]=1;
    for(i=2;i<n;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    return f[n-1];
}
int main()
{
 
  int n;
  printf("enter the number:");
  scanf("%d",&n);
 printf("%d",num(n)); 
    return 0;
}

