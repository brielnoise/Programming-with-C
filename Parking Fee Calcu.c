#include <stdio.h>

int main(void) {
    int type, hours;
    int baseFee, totalFee;
    int cash, paid = 0, change;
    const char *vehicle;

    printf("=== PARKING TICKET ===\n\n");
    printf("Maximum of 24hours only.\n\n");
    printf("1. MOTORCYCLE   ₱30 first 8hrs (+₱10 per succeeding hour)\n");
    printf("2. CAR          ₱60 first 8hrs (+₱10 per succeeding hour)\n");
    printf("Select a vehicle type (1 or 2): ");
    scanf("%d", &type);

    /* Pick the vehicle's base fee */
    if (type == 1) {
        vehicle = "MOTORCYCLE";
        baseFee = 30;
    } else if (type == 2) {
        vehicle = "CAR";
        baseFee = 60;
    } else {
        printf("INVALID VEHICLE TYPE. Only select between 1 and 2.");
        return 0;
    }

    printf("\nParking duration (hour/s): ");
    scanf("%d", &hours);

    if (hours > 24) {
        printf("\nThis parking lot offers a maximum of 24 hours only.");
        return 0;
    }
    if (hours <= 0) {
        printf("INVALID DURATION.");
        return 0;
    }

    /* Base fee covers the first 8 hours, then ₱10 for each extra hour */
    totalFee = baseFee;
    if (hours > 8) {
        totalFee += (hours - 8) * 10;
    }

    printf("\nTOTAL AMOUNT: ₱%d", totalFee);

    /* Keep asking for cash until the fee is fully paid */
    while (paid < totalFee) {
        printf("\nPlease insert cash: ₱");
        scanf("%d", &cash);

        if (cash != 1 && cash != 5 && cash != 10 &&
            cash != 20 && cash != 50 && cash != 100) {
            printf("Please insert only ₱1, ₱5, ₱10, ₱20, ₱50 or ₱100 bills/coins.\n");
            continue;
        }

        paid += cash;
        printf("\nBalance: ₱%d", paid);

        if (paid < totalFee) {
            printf("\nPayment not enough.");
        }
    }

    change = paid - totalFee;

    printf("\nPayment accepted.");
    printf("\nBalance = ₱0");
    printf("\nChange: ₱%d", change);

    printf("\n\n---------------------------\n");
    printf("===== Parking Receipt =====\n");
    printf("\nVehicle type: %s", vehicle);
    printf("\nParking duration (hour/s): %d", hours);
    printf("\nTotal parking fee: ₱%d", totalFee);
    printf("\nPayment amount: ₱%d", paid);
    printf("\nChange: ₱%d", change);
    printf("\n\nThank you! Drive safe!");
    printf("\n---------------------------\n");

    return 0;
}
