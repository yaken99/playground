#include <stdio.h>

int main(){
  
  int i,x[10],sum=0,*pt;
  
  for(i=0;i<10;i++){
    scanf("%d",&x[i]);
    pt = &x[i];
    sum += *pt;
  }
  printf("sum=%d\n",sum);

  return 0;
}
