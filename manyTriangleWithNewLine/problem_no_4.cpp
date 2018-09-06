#include <stdio.h>

int main()
{
   int n,i,x,j,ls,k,first_s;
   printf("Please enter a number:\n");
   scanf("%d",&n);

   for(k=n+1;k>=1;k--){
        first_s=0;
        for(x=2;x<=k;x++){
            first_s = first_s+x;
        }
        for(i=1;i<first_s;i++){
            printf(" ");
        }
        if(k>1){
            printf("*");
        }
        for(i=0; i<=n-k;i++){
            for(j=1; j<=k-1; j++){
                printf(" ");
            }
            for(j=1; j<=i+2; j++){
                printf("*");
            }
        }
        printf("\n");
   }

   return 0;
}
