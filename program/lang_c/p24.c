//次元数と2つのベクトルを受けとりノルムを出すプログラム

#include <stdio.h>
#include <math.h>

int main(){
  int d,i;
  float x[10],y[10],sum=0,ans=0;
  
  printf("次元数の入力=");
  scanf("%d",&d);
  printf("次元に対応したベクトルの入力");
  for(i=0;i<d;i++){
    scanf("%f",&x[i]);
  }
  printf("もう１つの次元に対応したベクトルの入力");
  for(i=0;i<d;i++){
    scanf("%f",&y[i]);
  }
  for(i=0;i<d;i++){
    sum += (x[i]-y[i])*(x[i]-y[i]);
  }
  ans = sqrt(sum);
  printf("distance=%f\n",ans);

  return 0;
}
