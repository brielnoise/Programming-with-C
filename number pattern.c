#include <stdio.h>

int main() {
    int rows = 4;
    int num = 1;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", num);
            num++;
            
        }
        printf("\n");
    }

    return 0;
}
