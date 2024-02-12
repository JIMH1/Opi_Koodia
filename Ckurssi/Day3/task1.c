    // Task 01:
    // Create function calculatesum();
    // ask two numbers, then calculate and print their sum
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
void calculatesum () {
  int a,b;
  printf("\nGive two integers\n");
  scanf("%d %d", &a, &b);
  printf("\nSum is %d\n", a+b);
  }
int main() {
 
  calculatesum();
 
  return 0;
  }