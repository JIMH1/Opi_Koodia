#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    
    // variable = (expression_compare) ? (expression_true) : (expression_false) 
    // sets variable value
    int a=10, b=5;

     // Task 02:
    // calculate 3 AND 6 
    // calculate 1 XOR 3 // should be 2
    a = 3, b = 6;
    // a = 0011     2+1=3
    // b = 0110     4+2=6
    // AND 0010     2
    printf("\n3 AND 6 is %d", a&b); // 2  

    a = 1, b = 3;
    // a = 0001     1
    // b = 0011     2+1=3
    // XOR 0010     2     
    printf("\n1 XOR 3 is %d", a^b); // 2   

    // 2s complement
    // transform with + 1 to bit
    // 0011 1010    binary value
    // 1100 0101    complement
    //        +1
    // 1100 0110    2s complement

    // if 
    // if is based on comparison
    // comparison must return true or false
    a = 10, b = 5;   
    if (a>=b) {
        printf("\na >= b");
    } else {
        printf("\na < b");
    }

      return 0;
}