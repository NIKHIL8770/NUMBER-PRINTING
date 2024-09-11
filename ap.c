#include <stdio.h>
int main() {
int n;
   printf("enter a number ;   ");
   scanf("%d",&n);
// for (int i=4; i<=n;i=i+3){
//   printf("%d\n",i);
  int a = 1;
  for (int i=1; i<=n;i++){

    printf("%d\n",a);
    a=a*2;
}
  return 0;
}