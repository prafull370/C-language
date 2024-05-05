#include <stdio.h>

int main()
 {
    int age;
    char gender, smoker;
    double insuranceAmount = 0;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 21 && age <= 30) {
        insuranceAmount = 10000;
    } else if (age >= 31 && age <= 40) {
        insuranceAmount = 15000;
    } else if (age >= 41 && age <= 50) {
        insuranceAmount = 20000;
    } else if (age >= 51 && age <= 60) {
        insuranceAmount = 40000;
    } else {
        printf("Insurance is not possible for this age.\n");
        return 0;
    }

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    printf("Is the insurer a smoker (Y/N)? ");
    scanf(" %c", &smoker);

    // Apply discounts or surcharges
    if (gender == 'F' || gender == 'f') {
        insuranceAmount -= 0.1 * insuranceAmount;  // 10% discount for females
    }
    if (smoker == 'Y' || smoker == 'y') {
        insuranceAmount += 0.1 * insuranceAmount;  // 10% increase for smokers
    }

    printf("The insurance amount is: %.2lf\n", insuranceAmount);

    return 0;
}