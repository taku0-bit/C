#include <stdio.h>

int main(){
  int n,i;
  double result;
  double goukei = 0;
  printf("整数値の個数:");
  scanf("%d",&n);

  double num[n];

  for(i = 0;i < n;i++)
  {
    printf("%d番目の値:",i+1);
    scanf("%lf",&num[i]);
  }
  for(i = 0;i < n;i++)
  {
    goukei = goukei + num[i];
  }
    result = goukei / n;
    printf("平均値:%.2lf",result);
    return 0;
}
