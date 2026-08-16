#include <stdio.h>

int main() {
    int choice, num;

    while (1) {
        printf("\n--- Number Operations Menu ---\n");
        printf("1. Check Even or Odd\n");
        printf("2. Check Positive or Negative\n");
        printf("3. Find Factorial\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (num % 2 == 0)
                    printf("%d is Even.\n", num);
                else
                    printf("%d is Odd.\n", num);
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (num > 0)
                    printf("%d is Positive.\n", num);
                else if (num < 0)
                    printf("%d is Negative.\n", num);
                else
                    printf("The number is Zero.\n");
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (num < 0) {
                    printf("Factorial not defined for negative numbers.\n");
                } else {
                    int fact = 1;
                    for (int i = 1; i <= num; i++) {
                        fact *= i;
                    }
                    printf("Factorial of %d = %d\n", num, fact);
                }
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}