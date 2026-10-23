#include <stdio.h>

int main() 
{
        
    int // Stocks
        tech_stock = 1,
        choco_stock = 1,
        energy_stock = 1,
        chips_stock = 1,
        water_stock = 1,
        // Prices
        tech_price = 150,
        choco_price = 40,
        energy_price = 50,
        chips_price = 30,
        water_price = 15,
        
        user_input,
        inserted_money = 0,
        current_balance = 0;
    
    while (1) {
    
        printf("\n=== VENDING MACHINE ===\n\n");
        printf("Current Balance: P%d\n\n", current_balance);
        printf("1. Tech Accessories  P%d  (stock: %d)\n", tech_price, tech_stock);
        printf("2. Chocolate Bars    P%d  (stock: %d)\n", choco_price, choco_stock);
        printf("3. Energy Drinks     P%d  (stock: %d)\n", energy_price, energy_stock);
        printf("4. Potato Chips      P%d  (stock: %d)\n", chips_price, chips_stock);
        printf("5. Bottled Water     P%d  (stock: %d)\n\n", water_price, water_stock);
        printf("6. Insert Money\n");
        printf("0. Coin Return\n");
        
        if (tech_stock == 0 && choco_stock == 0 && energy_stock == 0 && 
            chips_stock == 0 && water_stock == 0) {
            printf("\nVendo is out of stock, check again later\n");
            return 0;
        }
        printf("Select Option (0-6): "); 
        scanf("%d", &user_input);

        while (user_input < 0 || user_input > 6) { 
            printf("Invalid Choice, Try Again\n");
            printf("Select Option (0-6): ");
            scanf("%d", &user_input);
        }
        
        switch (user_input) {
            case 0:
                printf("\n-----------------------------------\n");
                printf("Coin Return: Dispensing P%d change...\n", current_balance);
                printf("Thank you! Have a great day!\n");
                printf("-----------------------------------\n");
                return 0;

            case 6: // Insert Money
                printf("Enter money amount: P");
                scanf("%d", &inserted_money);
                if (inserted_money <= 0) {
                    printf("Invalid amount!\n");
                }    
                else if (inserted_money > 500){
                    printf("Enter money below 500\n");
                }   
                else {
                    current_balance = current_balance + inserted_money;
                    printf("Added P%d to balance.\n", inserted_money);
                }
                break;
                
            case 1: // Tech Accessories
                if (tech_stock <= 0) {
                    printf("\nSorry, out of stock!\n");
                } else if (current_balance < tech_price) {
                    printf("\nInsufficient balance! Insert more money.\n");
                } else {
                    printf("\nDispensing Tech Accessories... Enjoy!\n");
                    current_balance = current_balance - tech_price;
                    tech_stock--;
                    printf("Dispensing change: P%d\n", current_balance);
                    current_balance = 0;
                }
                break;
              
            case 2: // Chocolate Bars
                if (choco_stock <= 0) {
                    printf("\nSorry, out of stock!\n");
                } else if (current_balance < choco_price) {
                    printf("\nInsufficient balance! Insert more money.\n");
                } else {
                    printf("\nDispensing Chocolate Bar... Enjoy!\n");
                    current_balance = current_balance - choco_price;
                    choco_stock--;
                    printf("Dispensing change: P%d\n", current_balance);
                    current_balance = 0;
                }
                break;

            case 3: // Energy Drinks
                if (energy_stock <= 0) {
                    printf("\nSorry, out of stock!\n");
                } else if (current_balance < energy_price) {
                    printf("\nInsufficient balance! Insert more money.\n");
                } else {
                    printf("\nDispensing Energy Drink... Enjoy!\n");
                    current_balance = current_balance - energy_price;
                    energy_stock--;
                    printf("Dispensing change: P%d\n", current_balance);
                    current_balance = 0;
                }
                break;

            case 4: // Potato Chips
                if (chips_stock <= 0) {
                    printf("\nSorry, out of stock!\n");
                } else if (current_balance < chips_price) {
                    printf("\nInsufficient balance! Insert more money.\n");
                } else {
                    printf("\nDispensing Potato Chips... Enjoy!\n");
                    current_balance = current_balance - chips_price;
                    chips_stock--;
                    printf("Dispensing change: P%d\n", current_balance);
                    current_balance = 0;
                }
                break;

            case 5: // Bottled Water
                if (water_stock <= 0) {
                    printf("\nSorry, out of stock!\n");
                } else if (current_balance < water_price) {
                    printf("\nInsufficient balance! Insert more money.\n");
                } else {
                    printf("\nDispensing Bottled Water... Enjoy!\n");
                    current_balance = current_balance - water_price;
                    water_stock--;
                    printf("Dispensing change: P%d\n", current_balance);
                    current_balance = 0;
                }
                break;
        }
    }
    
    return 0;
}
