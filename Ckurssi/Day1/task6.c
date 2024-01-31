#include <stdio.h>
int main() {
   // Task 6:
    // use float variable with a value 123.456
    // show its value as integer
    // show its value as exponential
    float myfloat = 123.456;
    printf("\n%d\n",myfloat); // Bad conversion!
    printf("\n%e\n",myfloat); // 1.234560e+002

    // you can make display
    // number shows base position and values are 
    // filled from there towards left
    // 0 fills with zeroes
    int myint = 1234;
    printf("%d\n",myint);
    printf("%8d\n",myint);
    printf("%16d\n",myint);
    printf("%016d\n",myint);
        printf("%.1f\n",myfloat); // 123.5
      return 0;
}