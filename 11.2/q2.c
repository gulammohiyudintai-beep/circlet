#include <stdio.h>

int main() {
    int i, j, a;

   for ( i=5; i>=1; i--){
        for (a=i; a>=1; a--){
            printf(" ");
        }
       for (j=i; j<=5; j++)
       {
         printf("%d",j);
        }
       
        printf("\n");
   }
   
   

    return 0;
}
