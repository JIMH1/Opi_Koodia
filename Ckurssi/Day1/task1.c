#include <stdio.h>
int main() {
    // Task 1:
    // Ask value from user and calculate its square
    // Then type
    // "The square of your value is <result>"
    int value = 0;
    printf("\nTask 1\n");
    printf("Tell me a value?\n");
    scanf("%d", &value);
    printf("\nThe square of your value is %d\n", value*value);
      return 0;
}