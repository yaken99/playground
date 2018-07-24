#define N 100
#include <stdio.h>

int main(){
  
  char x[N],y[N];
  int i,j=0;

  scanf("%s",x);

  for(i=0;x[i]!='\0';i++){
    if((x[i] != 'a') && (x[i] != 'i') && (x[i] != 'u') && (x[i] != 'e') && (x[i] != 'o')){
      y[j] = x[i];
      j++;
    }
  }

  printf("%s\n",y);
  return 0;
}
