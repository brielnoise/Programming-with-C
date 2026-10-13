// Gabriel L. Arbuis
// Number System Classification

#include <stdio.h>

int main()
{
    int Neg_count = 0;
    int Pos_count = 0;
    int Zer_count = 0;

    printf("Give a total of 10 integers\n");

    for (int i = 1; i <= 10; i++)
    {
        int num;
        printf("Enter integer %d: ", i);
        scanf("%d", &num);

        int classification;

        if (num > 0)
        {
            classification = 1;
            Pos_count++;
        }
        else if (num < 0)
        {
            classification = -1;
            Neg_count++;
        }
        else
        {
            classification = 0;
            Zer_count++;
        }

        switch (classification)
        {
            case 1:
                printf("  -> %d is a Positive number.\n", num);
                break;
            case -1:
                printf("  -> %d is a Negative number.\n", num);
                break;
            case 0:
                printf("  -> %d is Zero.\n", num);
                break;
            default:
                printf("  -> Invalid classification.\n");
                break;
        }
    }

    printf("\n--- Final Summary ---\n");
    printf("Total Positive numbers: %d\n", Pos_count);
    printf("Total Negative numbers: %d\n", Neg_count);
    printf("Total Zeros: %d\n", Zer_count);

    return 0;
}
