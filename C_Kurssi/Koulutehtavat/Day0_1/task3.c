#include <stdio.h>
int main() {
    // Task 3:
    // Ask name and age from user
    // Then type 
    // "I am <name> and my age is <age>"

    char name[10] = "";
    int age = 0;

    printf("\nTask 3\n");
    printf("Tell me your name?\n");
    scanf("%s", &name);

    printf("\nTell me your age?\n");
    scanf("%d", &age);

    printf("\nI am %s and my age is %d\n", name, age);
  return 0;
}