#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    switch (marks) {
        case 90 ... 100:
            printf("Grade: Excellent\n");
            break;
        case 80 ... 89:
            printf("Grade: 1st division with honours\n");
            break;
        case 70 ... 79:
            printf("Grade: 1st division\n");
            break;
        case 60 ... 69:
            printf("Grade: 2nd division\n");
            break;
        case 50 ... 59:
            printf("Grade: Pass\n");
            break;
        case 0 ... 49:
            printf("Grade: Fail\n");
            break;
        default:
            printf("Invalid marks entered.\n");
            break;
    }
    return 0;
}   