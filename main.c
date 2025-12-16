#include <stdio.h>
#include <math.h>
#include "calculator.h"

void show_menu() {
    printf("\n==== Advanced Calculator ====\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Power\n");
    printf("6. Square Root\n");
    printf("7. sin(x)\n");
    printf("8. cos(x)\n");
    printf("9. tan(x)\n");
    printf("10. log(x)\n");
    printf("11. log10(x)\n");
    printf("0. Exit\n");
}

int main () {
    int choice;
    int unit_choice;
    double a, b, result;
    
    while (1) {
        show_menu();
        printf("Choose: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Goodbye!\n");
            break;
        }

        if (choice >= 1 && choice <=5) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
        } else if ( 7 <= choice && choice <= 9) {
            printf("Choose the unit:\n1. Degree\n2. Radian:\n>");
            scanf("%d", &unit_choice);

            if ( unit_choice == 1 ) {
                printf("Enter the Degree: ");
                scanf("%lf", &a);
                a = deg_to_rad( a );
            } else if (unit_choice == 2 ) {
                printf("Enter the Radian: ");
                scanf("%lf", &a);
            } else {
                printf("Invalid Input! Enter again");
            }

        } else if (choice == 6 || (10 <= choice && choice <= 11)) {
            printf("Enter one number: ");
            scanf("%lf", &a);
        }

        switch (choice) {
            case 1: result = add(a, b); break;
            case 2: result = subtract(a, b); break;
            case 3: result = multiply(a, b); break;
            case 4: result = divide(a, b); break;
            case 5: result = power(a, b); break;
            case 6: result = square_root(a); break;
            case 7: result = sine(a); break;
            case 8: result = cosine(a); break;
            case 9: result = tangent(a); break;
            case 10: result = logarithm(a); break;
            case 11: result = logarithm_10(a); break;
            default: 
                printf("Invalid choice!\n");
                continue;
        }

        if (isnan(result)) {
            printf("Math error!\n");
        } else {
            printf("Result = %.6f\n", result);
        }
    }

    return 0;
}
