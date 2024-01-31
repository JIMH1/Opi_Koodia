#include <stdio.h>
int main() {

    // Task 2:
    // Ask length and width from user and calculate square size
    // Then type
    // "The square of <length> and <width> is <result>"
    int length = 0;
    int width = 0;

    printf("\nTask 2\n");
    printf("Tell me a length?\n");
    scanf("%d", &length);
    printf("Tell me a width?\n");
    scanf("%d", &width);
    printf("The square of %d and %d is %d", length, width, length*width);
  return 0;
}