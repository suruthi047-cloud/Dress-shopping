#include <stdio.h>

int main() {
    int choice, qty;
    float total = 0;
    int kQty = 0, sQty = 0, wQty = 0;

    // Prices
    float kPrice = 1200.0; // Kurti
    float sPrice = 2500.0; // Saree
    float wPrice = 1800.0; // Western Dress

    printf("👗 ONLINE DRESS SHOPPING SYSTEM 👗\n");

    while (1) {
        printf("\n1. Kurti        - Rs.1200");
        printf("\n2. Saree        - Rs.2500");
        printf("\n3. Western Dress- Rs.1800");
        printf("\n4. Generate Bill & Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter quantity: ");
                scanf("%d", &qty);
                kQty += qty;
                break;

            case 2:
                printf("Enter quantity: ");
                scanf("%d", &qty);
                sQty += qty;
                break;

            case 3:
                printf("Enter quantity: ");
                scanf("%d", &qty);
                wQty += qty;
                break;

            case 4:
                printf("\n------------------- BILL -------------------\n");
                printf("Item           Qty     Price     Total\n");
                printf("--------------------------------------------\n");

                if (kQty > 0) {
                    printf("Kurti          %d      %.2f    %.2f\n",
                           kQty, kPrice, kQty * kPrice);
                    total += kQty * kPrice;
                }

                if (sQty > 0) {
                    printf("Saree          %d      %.2f    %.2f\n",
                           sQty, sPrice, sQty * sPrice);
                    total += sQty * sPrice;
                }

                if (wQty > 0) {
                    printf("Western Dress  %d      %.2f    %.2f\n",
                           wQty, wPrice, wQty * wPrice);
                    total += wQty * wPrice;
                }

                printf("--------------------------------------------\n");
                printf("GRAND TOTAL: Rs. %.2f\n", total);
                printf("Thank you for shopping with us! 😊\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}