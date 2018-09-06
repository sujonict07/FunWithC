#include <stdio.h>

int main()
{
int n;

printf("Enter number of rows\n");
scanf("%d", &n);

for (int i = 1; i <= n; i++)
{
  for(int j = 1; j <= i; j++){
    printf("%c",'A');
  }

  for(int k = 1; k <= n-i; k++){
    printf("%c",'B');
  }
}

return 0;
}
