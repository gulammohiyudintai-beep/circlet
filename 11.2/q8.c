#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {
        for (int k = 1; k <=i; k++)
        {
           printf("%d ",k);
        }
        
        for (j = 4; j >= i; j--) {
            printf("  ");
        }


         
        for (j = i; j <= 4; j++) {
            printf("  ");
        }

          for (int k = i; k >=1; k--)
        {
           printf("%d ",k);
        }
       

        printf("\n");
    }


    for (i = 1; i <= 5; i++) {
        for (int k = 1; k <=i; k++)
        {
           printf("%d ",k);
        }
        
        for (j = 4; j >= i; j--) {
            printf("  ");
        }


         
        for (j = i; j <= 4; j++) {
            printf("  ");
        }

          for (int k = i; k >=1; k--)
        {
           printf("%d ",k);
        }
       

        printf("\n");
    }

    return 0;
}
