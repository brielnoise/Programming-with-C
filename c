#include <stdio.h>

int main() {
    int row_choice,
    col_choice;
    
    printf("Enter the number of rows: ");
    scanf("%d", &row_choice);
    
    printf("Enter the number of columns: ");
    scanf("%d", &col_choice);
    
    printf("\n\n");
    
    for (int i = 1; i <= row_choice; i++){
        for(int x= 1; x <= col_choice; x++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
