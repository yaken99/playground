#include <stdio.h>
int main(){

  int i,j,temp,*pt,x[10]={9,4,6,2,1,8,0,3,7,5};

  for(i=0;i<9;i++){
    for(j=9;j>=i;j--){
      if(x[j-1] > x[j]){
	temp = x[j];
	x[j] = x[j-1];
	x[j-1] = temp;
      }
    }
  }
  pt = x;
  for(i=0;i<10;i++,pt++){
    printf("%d",*pt);
  }
  printf("\n");
  return 0;
}
