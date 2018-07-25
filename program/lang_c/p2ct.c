//文字列を入力したら逆順に出てくるプログラム
//汚い
#include <stdio.h>

#define n 10
int main(){

  char s[n],t[n];
  int i,j;
  
  printf("文字列を入力\n");
  scanf("%s",s);

  for(i=0;i<n;i++){
    if(s[i]=='\0'){
      j=i-1;
      printf("%d",j);
      break;
    }
  }
  for(i=j;i>=0;i--){
    for(j=0;j<4;j++){
      printf("%d",i);
      t[j]=s[i];
    }
  }
  printf("%s\n",t);
  return 0;
}
