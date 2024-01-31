    // Task 02:
    // Do task 01 but use return statement to return value
    // then print the result
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int calculatesumwithreturn () {
    int a,b;
    printf("\nGive two integers\n");
    scanf("%d %d", &a, &b);
    return a+b;
    printf("\nSum is %d\n", a+b);
}
int main() {
 
  calculatesumwithreturn();
 
  return 0;
  }

