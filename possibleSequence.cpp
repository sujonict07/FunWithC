#include <stdio.h>

int main()
{
 for(int i ='A'; i <='C';i++){
     for( int j = 'A'; j<='C'; j++){
        for(int k = 'A'; k<='C'; k++){
            printf("%c%c%c",i,j,k);
            printf("\n");
        }
     }
  }
 return 0;
}
