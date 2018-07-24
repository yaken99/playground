#include <stdio.h>
int main(){

  int i,sum=0,x[10];
  for(i=0;i<10;i++){
    scanf("%d",&x[i]);
    sum += x[i];
  }
  printf("sum=%d\n", sum);
  return 0;
}
