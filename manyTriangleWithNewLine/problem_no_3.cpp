#include <stdio.h>

int main()
{
  int num;
  scanf("%d", &num);

  for(int i = 1; i <= num+1; i++) {

      for(int l = 1;l < num + 1; l++){
           for(int j = l; j <= i; j++) {
               printf("*");
           }
           for(int j = i; j <= num; j++) {
               printf(" ");
           }
       }
       printf("\n");
       }
  }
