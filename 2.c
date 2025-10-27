#include <stdio.h>
#include <string.h>
#include <stdbool.h>

float calculateTotal(float num[], int size) {
    int i;
    float total = 0.0;
    for (i = 0; i < size; i++) {
        total += num[i];
    }
    return total;
}

float applyDiscount(float total) {
    float dtotal = total;
    if (total > 5000) {
        dtotal = total * 0.9;
    }
    return dtotal;
}

void printBill(float dtotal) {
    printf("Your final amount is: %.2f\n", dtotal);
}

int main() {
    int n = 1, i, size;
    float dtotal, total = 0.0;

    printf("How many items are in your cart? ");
    scanf("%d", &size);
    
    float items[size];
    
    for (i = 0; i < size; i++) {
        printf("Enter price of item %d: ", n);
        scanf("%f", &items[i]);
        n++;
    }
    
    total = calculateTotal(items, size);
    printf("Your total is: %.2f\n", total);
    
    dtotal = applyDiscount(total);
    
    printBill(dtotal);
    
    return 0;
}
