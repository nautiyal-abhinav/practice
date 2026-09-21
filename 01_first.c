#include <stdio.h>

int main() {
    int x, y = 0;

    printf("Enter the total amount: ");
    scanf("%d", &x);

    if (x > 1000) {
        y = 90 * x / 100;
        printf("Congo you get 10%% discount. New amount: %d\n", y);
    } else {
        printf("Sorry you don't get any discount.\n");
    }

    return 0;
}