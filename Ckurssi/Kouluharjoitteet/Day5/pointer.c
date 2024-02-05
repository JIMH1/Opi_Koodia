#include <stdio.h>
#include <time.h>
#include <stdlib.h>




void osoittaja()
{
    int var = 10;                   //Perus int muuttuja jota muutellaan osoittimien avulla koodissa alempana
 
    // declare pointer variable
    int* ptr;                       // Ensmmäinen osoitin
    int** ptr2;                     // Osoitin 2 
    int*** ptr3;                    // Osoitin 3
    int**** ptr4;                   // Osoitin 4
 
    // note that data type of ptr and var must be same
    ptr = &var;                     //1 osoitin saa var muuttujan osoitteen
    ptr2 = &ptr;                    //2 osoitin saa 1 osoittimen osoitteen
    ptr3 = &ptr2;                   //3 osoitin saa 2 osoittimen osoitteen
    ptr4 = &ptr3;                   //3 osoitin saa 4 osoittimen osoitteen
 
    // assign the address of a variable to a pointer
    printf("Adress at ptr = %p \n", ptr);                   //Tulostaa 1 osoittimen osoitteen
    printf("Value at var = %d \n", var);                    //Tulostaa muuttuja var arvon
    printf("Value at *ptr = %d \n", *ptr);                  //Tulostaa 1 osoittimen osoittaman arvon (var muuttujan)
    printf("Adress at **ptr2 = %p \n", ptr2);               //Tulostaa 2 osoittimen osoitteen
    printf("Adress at ***ptr3 = %p \n", ptr3);              //Tulostaa 3 osoittimen osoitteen
    printf("Value at ***ptr3 = %d \n", ***ptr3);            //Tulostaa 3 osoittimen osoittaman arvon (var muuttujan)
    printf("Adress at ***ptr4 = %p \n", ptr4);              //Tulostaa 4 osoittimen osoitteen
    printf("Value at ****ptr4 = %d \n", ****ptr4);          //Tulostaa 4 osoittimen osoittaman arvon (var muuttujan)
                                           
    ****ptr4 = ****ptr4 + 10;                               //Nostaa ****ptr4 osoittaman muuttujan var arvoa kymmenellä
    printf("Value at ****ptr4 = %d \n", ****ptr4);          //Tulostaa osoittimen 4:n osoittaman arvon (var muuttujan)
    printf("Value at var = %d \n", var);                    //Tulostaa muuttuja var arvon
    **ptr2 = ***ptr3 +10;                                   //Osoittaja 2 osoittama arvo (var muuttuja) saa osoittaja 3:selta uuden arvon
    printf("Value at ****ptr4 = %d \n", ****ptr4);          //Tulostaa osoitin 4:n osoittaman arvon


}
 
// Driver program
int main()
{
    osoittaja();
    return 0;
}