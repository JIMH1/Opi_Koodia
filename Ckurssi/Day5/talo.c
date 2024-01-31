/* // oma versio
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
 
struct Equipment {
    char nimi[20];
    struct Room* huone;
};
 
struct Room {
    char nimi[10];
    int koko;
    struct House* talo;
    struct Equipment (*varustelista)[2];
};
 
struct House {
    char omistaja[10];
    struct Room (*huonelista)[5];
};
 
int main() {
 
    // Luo talo
    struct House myhouse;
    strcpy(myhouse.omistaja,"Janne");
 
    // Luo 1st huone
    struct Room wc;
    strcpy(wc.nimi,"WC");
    wc.talo = NULL;
    wc.koko = 6;

    // Luo 2nd huone
    struct Room makuuhuone;
    strcpy(makuuhuone.nimi,"makuuhuone");
    makuuhuone.talo = NULL;
    makuuhuone.koko = 6;

     // Luo 3rd huone
    struct Room keittio;
    strcpy(keittio.nimi,"keittio");
    keittio.talo = NULL;
    keittio.koko = 6;

     // Luo 4th huone
    struct Room olohuone;
    strcpy(olohuone.nimi,"olohuone");
    olohuone.talo = NULL;
    olohuone.koko = 6;

    // Luo 5th huone
    struct Room lastenhuone;
    strcpy(lastenhuone.nimi,"lastenhuone");
    lastenhuone.talo = NULL;
    lastenhuone.koko = 6;
 
    // Luo kalusto
    // vessan kalusto
    struct Equipment valtaistuin;
    strcpy(valtaistuin.nimi,"valtaistuin");
    valtaistuin.huone = &wc;
 
    struct Equipment suihku;
    strcpy(suihku.nimi,"suihku");
    suihku.huone = &wc;

    // makuuhuoneen kalusto
    struct Equipment parisanky;
    strcpy(parisanky.nimi,"parisänky");
    parisanky.huone = &makuuhuone;

    struct Equipment kelloradio;
    strcpy(kelloradio.nimi,"Kelloradio");
    kelloradio.huone = &makuuhuone;

    // Keittiön kalusto
    struct Equipment liesi;
    strcpy(liesi.nimi,"Liesi");
    liesi.huone = &keittio;

    struct Equipment pesukone;
    strcpy(pesukone.nimi,"Astianpesukone");
    pesukone.huone = &keittio;

    //Olohuoneen kalusto
    struct Equipment sohva;
    strcpy(sohva.nimi,"Sohva");
    sohva.huone = &olohuone;

    struct Equipment televisio;
    strcpy(televisio.nimi,"Televisio");
    televisio.huone = &olohuone;

    //Lastenhuoneen kalusto
    struct Equipment lastensanky;
    strcpy(lastensanky.nimi,"Lastensänky");
    lastensanky.huone = &lastenhuone;

    struct Equipment lelukori;
    strcpy(lelukori.nimi,"lelukori");
    lelukori.huone = &lastenhuone;
 
    // Liitä kalusto huoneeseen
    // Vessan kalusto
    struct Equipment wcarray[] = { valtaistuin, suihku };
    wc.varustelista = &wcarray;

    // Makuuhuoneen kalusto
    struct Equipment makuuhuonearray[] = { parisanky, kelloradio };
    makuuhuone.varustelista = &makuuhuonearray;

    // Keittiön kalusto
    struct Equipment keittioarray[] = { liesi, pesukone };
    keittio.varustelista = &keittioarray;

    // Olohuoneen kalusto
    struct Equipment olohuonearray[] = { sohva, televisio };
    olohuone.varustelista = &olohuonearray;

    // Lastenhuoneen kalusto
    struct Equipment lastenhuonearray[] = { lastensanky, lelukori };
    lastenhuone.varustelista = &lastenhuonearray;

      
    // Liitä huone taloon
    // vessan liittäminen
    wc.talo = &myhouse;

    // makuuhuoneen liittäminen
    makuuhuone.talo = &myhouse;

    // keittiön liittäminen
    keittio.talo = &myhouse;

    // olohuoneen liittäminen
    olohuone.talo = &myhouse;

    // lastenhuoneen liittäminen
    lastenhuone.talo = &myhouse;
 
    // liitä taloon huoneet
    struct Room roomarray[] = { wc, makuuhuone, keittio, olohuone, lastenhuone };
    myhouse.huonelista = &roomarray;

    // tulosta mitä huoneita talosta löytyy
    // Tulosta myös jokaisen huoneen kalusteet ja varusteet
    for (int iter=0; iter < 5; iter++) {
        printf("\n%x", (myhouse.huonelista[iter]));
        printf("\n%s", (*(myhouse.huonelista))[iter]);
        printf("\n%d", (*(myhouse.huonelista))[iter]);
        printf("\n-----------");
        for (int iter2=0; iter2 < 2; iter2++) {
            printf("\n%s", ((*myhouse.huonelista))[iter].varustelista[iter2])->nimi);
        }

    }

 
    return 0;
}
 */ 

// opettajan mallikappale

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
 
struct Equipment {
    char nimi[20];
    struct Room* huone;
};
 
struct Room {
    char nimi[20];
    int koko;
    struct House* talo;
    struct Equipment (*varustelista)[2];
};
 
struct House {
    char omistaja[20];
    struct Room (*huonelista)[5];
};
 
int main() {
 
    // Luo talo
    struct House myhouse;
    strcpy(myhouse.omistaja,"Janne");
 
    // Luo huone
    struct Room wc, keittio, olohuone, makuuhuone, lastenhuone;
    strcpy(wc.nimi,"WC");
    strcpy(keittio.nimi,"keittio");
    strcpy(olohuone.nimi,"olohuone");
    strcpy(makuuhuone.nimi,"makuuhuone");
    strcpy(lastenhuone.nimi,"lastenhuone");
    wc.koko = 6;
    keittio.koko = 15;
    olohuone.koko = 20;
    makuuhuone.koko = 12;
    lastenhuone.koko = 12;
 
    // Luo kalusto ja liitä kalusto huoneeseen
    struct Equipment valtaistuin;
    strcpy(valtaistuin.nimi,"valtaistuin");
    valtaistuin.huone = &wc;
 
    struct Equipment suihku;
    strcpy(suihku.nimi,"suihku");
    suihku.huone = &wc;
 
    struct Equipment wcarray[2] = { valtaistuin, suihku };
    wc.varustelista = &wcarray;
   
    struct Equipment liesi;
    strcpy(liesi.nimi,"liesi");
    liesi.huone = &keittio;
 
    struct Equipment pesukone;
    strcpy(pesukone.nimi,"pesukone");
    pesukone.huone = &keittio;
 
    struct Equipment keittioarray[2] = { liesi, pesukone };
    keittio.varustelista = &keittioarray;
 
    struct Equipment sohva;
    strcpy(sohva.nimi,"sohva");
    sohva.huone = &olohuone;
 
    struct Equipment televisio;
    strcpy(televisio.nimi,"televisio");
    televisio.huone = &olohuone;
 
    struct Equipment olohuonearray[2] = { sohva, televisio };
    olohuone.varustelista = &olohuonearray;
 
    struct Equipment sanky1;
    strcpy(sanky1.nimi,"sanky");
    sanky1.huone = &makuuhuone;
 
    struct Equipment kelloradio;
    strcpy(kelloradio.nimi,"kelloradio");
    kelloradio.huone = &makuuhuone;
 
    struct Equipment makuuhuonearray[2] = { sanky1, kelloradio };
    makuuhuone.varustelista = &makuuhuonearray;
 
    struct Equipment sanky2;
    strcpy(sanky2.nimi,"sanky");
    sanky2.huone = &lastenhuone;
 
    struct Equipment lelukori;
    strcpy(lelukori.nimi,"lelukori");
    lelukori.huone = &lastenhuone;
 
    struct Equipment lastenhuonearray[2] = { sanky2, lelukori };
    lastenhuone.varustelista = &lastenhuonearray;
 
    // Liitä huone taloon
    wc.talo = &myhouse;
    keittio.talo = &myhouse;
    olohuone.talo = &myhouse;
    makuuhuone.talo = &myhouse;
    lastenhuone.talo = &myhouse;
 
    // liitä taloon huone
    struct Room roomarray[] = { wc, keittio, olohuone, makuuhuone, lastenhuone };
    myhouse.huonelista = &roomarray;
 
    // Luokaa uusia huoneita:
    // Keittiö: Liesi ja Pesukone
    // Olohuone: Sohva ja Televisio
    // Makuuhuone: sänky ja kelloradio
    // Lastenhuone: sänky ja lelukori
 
    // Tulosta mitä huoneita talosta löytyy?
    // Kerro myös jokaisen huoneen varusteet
    for (int iter=0; iter < 5; iter++) {
        printf("\n%x", (myhouse.huonelista)[iter] );
        printf("\n%s", (*(myhouse.huonelista))[iter].nimi );
        printf("\n%d", (*(myhouse.huonelista))[iter].koko );
        printf("\n--------------");
        for (int iter2=0; iter2 < 2; iter2++) {
            printf("\n%s", ((*(myhouse.huonelista))[iter].varustelista[iter2])->nimi );
        }
        printf("\n==============");
    }
 
    // Hae tieto, missä kelloradio on?
    printf("\nKelloradio on huoneessa %s.",kelloradio.huone->nimi);
    printf("\nKelloradio on huoneessa %s.",(*(kelloradio.huone)).nimi);
 
    // kuka omistaa talon, jossa on kelloradio?
    printf("\nTalon omistaa %s.",kelloradio.huone->talo->omistaja);
    printf("\nTalon omistaa %s.",(*((*(kelloradio.huone)).talo)).omistaja);
 
    // Kuka omistaa talon, jossa on keittio?
    printf("\nTalon omistaa %s.", keittio.talo->omistaja);
 
    return 0;
}
 