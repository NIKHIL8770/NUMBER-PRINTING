


#include <stdio.h>
int main() {
  int n,m,o;
  printf("enter a number n  :");
  scanf("%d",&n);
  printf("enter a number m  :");
  scanf("%d",&m);
  printf("enter a number o  :");
  scanf("%d",&o);
  for (int i=n; i<=m; ++i)
    if (i%2==0) printf("%d\n",i+o);
return 0;
}