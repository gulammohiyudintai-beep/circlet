#include <stdio.h>

int main() {
    int i, j,n=6;

    for (i = 1; i <= 5; i++) {            
        for (j = 1; j <= n - i; j++) {    
            if ( j % 2 == 0)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }

    return 0;
}
