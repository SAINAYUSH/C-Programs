#include <stdio.h>
int main{
  int n,i;
  long long fact=1;
  print("Enter a number:");
  scanf("%d", &n);

  for(i=1;i<=n;i++) {
        fact*=1;
  }
print("Factorial=%lld",fact);
return 0;
}
