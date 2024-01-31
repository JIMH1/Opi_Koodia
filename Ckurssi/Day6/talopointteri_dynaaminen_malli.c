#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
 
struct Equipment {
    char* nimi;
    int index;
    struct Room* huone;
};
 
struct Room {
    int index;
    char* nimi;
    int koko;
    struct House* talo;
    struct Equipment *varustelista;
    int varustelkm;
};
 
struct House {
    char* omistaja;
    int huonelkm;
    struct Room *huonelista;
    void (*KerroOmistaja)(struct House*);
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
    temphouse.huonelkm = 0;
    temphouse.huonelista = NULL;
    temphouse.omistaja = malloc(strlen(omistaja));
    strcpy(temphouse.omistaja, omistaja);
    return temphouse;
}
 
int insertRoom(struct House*, struct Room, char*, int);
 
int insertRoom(struct House* house, struct Room room, char* nimi, int koko) {
    room.talo = house;
    room.nimi = malloc(strlen(nimi));
    strcpy(room.nimi,nimi);
    room.koko = koko;
    room.varustelkm = 0;
 
    house->huonelkm += 1;      
 
    // jos tämä on eka huone talossa, malloc
    // muuten realloc ja pidennä listaa yhdellä
    house->huonelista = (house->huonelkm == 1)
    ? malloc(house->huonelkm * sizeof(room))
    : realloc( house->huonelista, house->huonelkm * sizeof(room));
 
    if (house->huonelista == NULL) {
        printf("\nMemory allocation error!");
        exit(666); // exit program with error number
    }
    // Nyt voimme lisätä huoneen viimeiseksi
    house->huonelista[house->huonelkm - 1] = room;
    room.index = house->huonelkm - 1;
    return room.index;
};
 
int insertEquipment(struct House*, int n, struct Equipment, char*);
 
int insertEquipment(struct House* house, int index, struct Equipment equipment, char* nimi) {
    equipment.nimi = malloc(strlen(nimi));
    strcpy(equipment.nimi,nimi);
    equipment.huone = &house->huonelista[index];
 
    house->huonelista[index].varustelkm += 1;
 
    // jos tämä on eka varuste huoneessa, malloc
    // muuten realloc ja pidennä listaa yhdellä
    house->huonelista[index].varustelista =
    (house->huonelista[index].varustelkm == 1)
    ? malloc(house->huonelista[index].varustelkm * sizeof(equipment))
    : realloc( house->huonelista[index].varustelista, house->huonelista[index].varustelkm * sizeof(equipment));
 
    if (house->huonelista[index].varustelista == NULL) {
        printf("\nMemory allocation error!");
        exit(666); // exit program with error number
    }
    // Nyt voimme lisätä huoneen viimeiseksi
    house->huonelista[index].varustelista[house->huonelista[index].varustelkm -1] = equipment;
    equipment.index = house->huonelista[index].varustelkm -1;
    return equipment.index;
}
 
int main() {
 
    // Luo talo
    struct House myhouse = createHouse("Janne");
 
    struct Room wc, keittio, olohuone, makuuhuone, lastenhuone;
    int wcindex = insertRoom(&myhouse, wc, "WC", 6);
    int keittioindex = insertRoom(&myhouse, keittio, "keittio", 15);
    int olohuoneindex = insertRoom(&myhouse, olohuone, "olohuone", 20);
    int makuuhuoneindex = insertRoom(&myhouse, makuuhuone, "makuuhuone", 12);
    int lastenhuoneindex = insertRoom(&myhouse, lastenhuone, "lastenhuone", 12);
 
    // Luo kalusto ja liitä kalusto huoneeseen
    struct Equipment valtaistuin, suihku, liesi,
    pesukone, sohva, televisio, sanky1, sanky2,
    kelloradio, lelukori;
    insertEquipment(&myhouse, wcindex, valtaistuin, "valtaistuin");
    insertEquipment(&myhouse, wcindex, suihku, "suihku");
    insertEquipment(&myhouse, keittioindex, liesi, "liesi");
    insertEquipment(&myhouse, keittioindex, pesukone, "pesukone");
    insertEquipment(&myhouse, olohuoneindex, sohva, "sohva");
    insertEquipment(&myhouse, olohuoneindex, televisio, "televisio");
    insertEquipment(&myhouse, makuuhuoneindex, sanky1, "sanky");
    insertEquipment(&myhouse, makuuhuoneindex, kelloradio, "kelloradio");
    insertEquipment(&myhouse, lastenhuoneindex, sanky2, "sanky");
    insertEquipment(&myhouse, lastenhuoneindex, lelukori, "lelukori");
 
    // Tulosta mitä huoneita talosta löytyy?
    // Kerro myös jokaisen huoneen varusteet
 
    for (int iter=0; iter < myhouse.huonelkm; iter++) {
        printf("\n%x", myhouse.huonelista[iter] );
        printf("\n%s", myhouse.huonelista[iter].nimi );
        printf("\n%d", myhouse.huonelista[iter].koko );
        printf("\n--------------");
        for (int iter2=0; iter2 < myhouse.huonelista[iter].varustelkm; iter2++) {
            printf("\n%s", myhouse.huonelista[iter].varustelista[iter2].nimi );
        }
        printf("\n==============");
    }
 
    // Lisää Taloon funktio, joka kirjoittaa jotain.
    myhouse.KerroOmistaja = &getOwner;
    myhouse.KerroOmistaja(&myhouse);
 
    return 0;
}