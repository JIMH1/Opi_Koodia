#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

struct Equipment {
    char* nimi;
    struct Room* huone;
};

struct Room {
    char* nimi;
    int koko;
    struct House* talo;
    struct Equipment *varustelista[2];
};

struct House {
    char* omistaja;
    struct Room *huonelista[5];
    void (*KerroOmistaja)(struct House*);
};

struct Kokeilu {

    struct Equipment *varustelista;

};

void luokokeilu() {


}

void getOwner(struct House*);

void getOwner(struct House* house) {
    printf("\nHei Olen %s!",house->omistaja);
}
struct House createHouse(char* );

struct House createHouse(char* omistaja) {
    struct House temphouse;
    temphouse.omistaja = malloc(strlen(omistaja));
    strcpy(temphouse.omistaja, omistaja);
    return temphouse;
}

void createRoom(struct House*, int, struct Room*, char*, int);

void createRoom(struct House* house, int n, struct Room* room, char* nimi, int koko) {
    room->talo = house;
    room->nimi = malloc(strlen(nimi));
    strcpy(room->nimi,nimi);
    room->koko = koko;
    house->huonelista[n] = room;
}

void createEquipment(struct Room*, int n, struct Equipment*, char*);

void insertRoom(struct Room*, int n, struct Equipment*, char*);

void createEquipment(struct Room* room, int n, struct Equipment* equipment, char* nimi) {
    strcpy(equipment->nimi,nimi);
    equipment->huone = room;
    room->varustelista[n] = equipment;
}


int main() { 

    // Luo talo
    struct House myhouse = createHouse("Janne");
 
    struct Room wc, keittio, olohuone, makuuhuone, lastenhuone;
insertRoom(&myhouse, &wc, "WC", 6);


/*     createRoom(&myhouse, 0,  &wc, "WC", 6);
    createRoom(&myhouse, 1,  &keittio, "keittio", 15);
    createRoom(&myhouse, 2,  &olohuone, "olohuone", 20);
    createRoom(&myhouse, 3,  &makuuhuone, "makuuhuone", 12);
    createRoom(&myhouse, 4,  &lastenhuone, "lastenhuone", 12);
   printf("TESTI"); */

    // Luo kalusto ja liitä kalusto huoneeseen
    struct Equipment valtaistuin, suihku, liesi, 
    pesukone, sohva, televisio, sanky1, sanky2, 
    kelloradio, lelukori;
    createEquipment(&wc, 0, &valtaistuin, "valtaistuin");
    createEquipment(&wc, 1, &suihku, "suihku");
    createEquipment(&keittio, 0, &liesi, "liesi");
    createEquipment(&keittio, 1, &pesukone, "pesukone");
    createEquipment(&olohuone, 0, &sohva, "sohva");
    createEquipment(&olohuone, 1, &televisio, "televisio");
    createEquipment(&makuuhuone, 0, &sanky1, "sanky");
    createEquipment(&makuuhuone, 1, &kelloradio, "kelloradio");
    createEquipment(&lastenhuone, 0, &sanky2, "sanky");
    createEquipment(&lastenhuone, 1, &lelukori, "lelukori");

    // Luokaa uusia huoneita:
    // Keittiö: Liesi ja Pesukone
    // Olohuone: Sohva ja Televisio
    // Makuuhuone: sänky ja kelloradio
    // Lastenhuone: sänky ja lelukori

    // Tulosta mitä huoneita talosta löytyy?
    // Kerro myös jokaisen huoneen varusteet

    for (int iter=0; iter < 5; iter++) {
        printf("\n%x", myhouse.huonelista[iter] );
        printf("\n%s", myhouse.huonelista[iter]->nimi );
        printf("\n%d", myhouse.huonelista[iter]->koko );
        printf("\n--------------");
        for (int iter2=0; iter2 < 2; iter2++) {
            printf("\n%s", (myhouse.huonelista[iter])->varustelista[iter2]->nimi );
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

    // Lisää Taloon funktio, joka kirjoittaa jotain.
    myhouse.KerroOmistaja = &getOwner;
    myhouse.KerroOmistaja(&myhouse);

    return 0;
}

