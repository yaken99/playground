#include <stdio.h>
int main(){

  int i,x[10],y[10],*pt1,*pt2;
  for(i=0;i<10;i++)
    scanf("%d",&x[i]);

  pt1 =&x[0];
  pt2 =&x[9];

  for(i=0;i<10;i++){
    y[i] = *pt1 + *pt2;
    pt1++;pt2--;
  }
  printf("y[5]=%5d\n",y[5]);
  return 0;
}
