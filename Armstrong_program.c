#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, sum = 0;
    int order = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the number of digits in the number
    temp = num;
    while (temp != 0) {
        order++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, order);
        temp /= 10;
    }

    if (num == sum) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;
}
