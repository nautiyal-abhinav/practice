#include <stdio.h>

int main() {
    float x, y = 0;

    printf("Enter the total amount: ");
    scanf("%f", &x);

    if (x > 1000) {
        y = 90 * x / 100;
        printf("Congo you get 10%% discount. Discounted amount: %.2f\n", y);
    } else if (x > 15000) {
        y = 85 * x / 100;
        printf("Congo you get 15%% discount. Discounted amount: %.2f\n", y);
    } else {
        printf("Sorry you don't get any discount.\n");
    }

    return 0;
}