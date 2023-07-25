#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( (n & 1) == 0 ){ //先にnと最下位ビットの論理積を計算する必要があるため
    printf("%d は偶数です\n", n);
  }
  return 0;
}
