#include <stdio.h>

int main(void)
{
  int num[10],i,j,result,A;

  for(i = 0;i < 10;i++)
  {
    printf("%dつ目の値:",i+1);
    scanf("%d",&num[i]);
  }
//順番の早い方が小さい値になるように数値を入れ替える
  for (i = 0; i < 10; i++)
  {
  for (j = i+1; j < 10; j++)
  {
//Aは数値を置き換えるための一時的の置き場所
  if (num[i] > num[j])
  {
    A =  num[i];
    num[i] = num[j];
    num[j] = A;
  }
  }
  }
//27~31 並び替えた配列がちゃんと昇順になっているか確認するプログラム
  printf("昇順ソートした数値\n");
  for(i = 0; i < 10; i++)
  {
    printf("%d\n",num[i]);
  }
  printf("5番目の値:%d",num[4]);
  return 0;
}
