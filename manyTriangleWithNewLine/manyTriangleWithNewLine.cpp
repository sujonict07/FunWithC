#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {

         for(int j = 1; j <= i+1; j++) {

             for(int k = 1; k <= j; k++) {
                printf("*");
            }
            printf("\n");
         }
    }
}
