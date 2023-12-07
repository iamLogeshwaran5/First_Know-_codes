#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1; // To handle larger factorials

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial does not exist for negative numbers\n");
    } else if (num == 0) {
        printf("The factorial of 0 is 1\n");
    } else {
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("The factorial of %d is %llu\n", num, factorial);
    }

    return 0;
}
