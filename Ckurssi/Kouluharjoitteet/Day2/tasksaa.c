#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

// Vaatteiden valinta
// switch case + range
int main() {
    // Anna lämpötila fahrenheitteina (int)
    // printf("Anna lämpötila-aste fahrenheitteinä");
    // scanf("%d",&a);

    // muuta se Celsiusasteiksi (float)
    //  °C = (°F − 32) / 1,8.
    // celsius = 5.0f / 9.0f * ( (float)fahrenheit - 32.0f );

    // muuttakaa celsiusasteet Asteiksi (int)    
    // määritä (boolean) sataa/ei sada
    // jos lämpöä on Asteina:
    // 25-30 astetta
    // kesähattu ja aurinkolasit
    // paitsi jos sataa, niin ei aurinkolaseja
    // 20-25 astetta:
    //  kesävaatteet
    // 10-20 astetta:
    // joko sadevaatteet tai kesävaatteet
    // 0-10 astetta:
    // lämpimät vaatteet
    // muuten ei osata neuvoa.

        int fahrenheit = 55;
    float celsius = 0;
    int asteet = 0;
    bool sataa = false;
 
    char asia;
    scanf("%c", &asia);
    printf("%c", asia);
    if (asia == 'k') {
        sataa = true;
    } else {
        sataa = false;
    }
 
    celsius = (fahrenheit-32)/1.8;
    asteet = celsius;
    printf("\nasteet: %d celsius: %f fahrenheit: %d\n", asteet, celsius, fahrenheit);
 // virheistä pisteissä huolimatta koodi toimii ajossa
    switch (asteet)
    {
    case 25 ... 30:
        printf("Kesähattu %s", sataa ? "" : " ja aurinkolasit");
        break;
    case 20 ... 24:
        printf("Kesävaatteet");
        break;
    case 10 ... 19:
        printf("%s", sataa ? "Sadevaatteet" : "Kesävaatteet");
        break;
    case 0 ... 9:
        printf("Lämpimät vaatteet");
        break;
    default:
        printf("Hae apua viisaammalta");
        break;
    }

      return 0;
}

