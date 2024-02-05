#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

void printvalue(int);

void printvalue(int arg) {
    printf("\nprintvalue is %d\n",arg);
}


int main() {

    struct House {
        int age;
        float size;
    } myhouse;

    // Tehtävä 01:
    // create struct house with properties age and size
    // en um we use is calle myhouse
    // cretae a pointervariable pointervariableE that uases it 

    myhouse.age = 111;
    myhouse.size = 123.45;

    struct House *pointervariableE = &myhouse;
    // following code reads contents of address
    // content is struct. Thus it works with . notation
    printf("\n%d", (*pointervariableE).age);
    printf("\n%f", (*pointervariableE).size);

    // -> notation is used to get value of an pointer variable
    printf("\n%d", pointervariableE->age);
    printf("\n%f", pointervariableE->size);

   /*  // & is used to show address...
    // &<variable> works with any variable
    // <pointervariable> works with any pointer variable
    printf("\n%x",myArray); */
    printf("\n%x",myhouse); 

    
    return 0;
}
