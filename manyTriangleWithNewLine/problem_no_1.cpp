#include <stdio.h>

int main()
{
int n;

printf("Enter positive number : \n");
scanf("%d", &n);

for(int i =1; i<=n;i++){
    for (int j = 1; j <= n; j++)
    {
      for(int k = 1; k <= j; k++){
        printf("%c",'A');
      }
      for(int k = 1; k <= n-j; k++){
        printf("%c",'B');
      }
    }
}
return 0;
}
