#include <stdio.h>

int main(){
  
  int i,x[10],sum=0;
  
  for(i=0;i<10;i++){
    scanf("%d",&x[i]);
    sum += x[i];
  }
  printf("sum=%d\n",sum);

  return 0;
}
