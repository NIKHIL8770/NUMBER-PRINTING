#include <stdio.h>
int main() {
  int n;
  printf("enter a number n  : ");
  scanf("%d",&n);
 
for (int i=2; i<=n/2;++i){
 if(n%i==0) {
   printf("%d composit number ",n);
   break;
 }
}
 
  return 0;
}
