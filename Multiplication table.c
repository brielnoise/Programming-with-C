// Gabriel L. Arbuis
//  Multiplication Table Code

#include <stdio.h>

int main()
{
    int user_input;
        printf("==== Multiplication Table ====\n");
        printf("Type desired number to compute: ");
        scanf("%d", &user_input);

    
    for (int i = 1;i <= 10; i++)
  {
    printf("%d x %d = %d \n" ,user_input, i, user_input*i);
    


        
  }
    
    
    
    
    return 0;
}
