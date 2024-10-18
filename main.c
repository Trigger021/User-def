#include <stdio.h>

int addition(int num1, int num2) {
    int sum = 0;
    sum = num1 + num2;
    return sum;
}

int main() {
    int var1, var2;

    printf("Enter num1: ");
    scanf("%d", &var1);

    printf("Enter num2: ");
    scanf("%d", &var2);

    int res = addition(var1, var2);
    printf("Sum is %d\n", res);

    return 0;
}
