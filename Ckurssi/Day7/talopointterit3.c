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
    //struct Room *huonelista[5];
    struct Room *huonelista;
    void (*KerroOmistaja)(struct House*);
};

struct kokeilu {
    struct Equipment *varustelista;
};

void getOwner(struct House*);
struct House createHouse(char* );
int insertRoom(struct House*, struct Room, char*, int);
int insertEquipment(struct House* house, int,struct Equipment equipment, char* nimi);

void getOwner(struct House* house) {
    printf("\nHei Olen %s!",house->omistaja);
}
struct House createHouse(char* omistaja) {
    struct House temphouse;
    temphouse.huonelkm=0;
    temphouse.huonelista = NULL;
    temphouse.omistaja = malloc(strlen(omistaja));
    strcpy(temphouse.omistaja, omistaja);
    return temphouse;
}

int insertRoom(struct House* house, struct Room room, char* nimi, int koko) {
    room.talo = house;
    room.nimi = malloc(sizeof(strlen(nimi+1)));
    strcpy(room.nimi,nimi);
    room.koko = koko;
    room.varustelkm = 0;
    
    (house->huonelkm) += 1;
    // Eka huone -> malloc else realloc
    house->huonelista = (house->huonelista == NULL)
    ? malloc(1*sizeof(room))
    :realloc(house->huonelista,house->huonelkm *sizeof(room));

    if (house->huonelista == NULL) {
        printf("\n Memory allcation error!");
        exit(666); // Exit koodi
    }
    house->huonelista[(house->huonelkm)-1] = room;
    return (house->huonelkm)-1;
}

int insertEquipment(struct House* house, int index, struct Equipment equipment, char* nimi) {
    equipment.nimi = malloc(sizeof(strlen(nimi)+1));
    strcpy(equipment.nimi,nimi);

    equipment.huone=&(house->huonelista[index]);
    
    house->huonelista[index].varustelkm += 1;
    
    house->huonelista[index].varustelista=
    (house->huonelista[index].varustelkm == 1)
    ? malloc(house->huonelista[index].varustelkm*sizeof(equipment))
    :realloc(house->huonelista[index].varustelista,house->huonelista[index].varustelkm *sizeof(equipment));

    if (house->huonelista[index].varustelista == NULL) {
        printf("\n Memory allcation error!");
        exit(666); // Exit koodi
    }
    house->huonelista[index].varustelista[house->huonelista[index].varustelkm-1] = equipment;
    return index;
}

int main() { 

    // Luo talo
    struct House myhouse = createHouse("Teemu");
 
    struct Room wc, keittio, olohuone, makuuhuone, lastenhuone;
    int wcindex = insertRoom(&myhouse,wc, "WC", 6);
    int keittioindex = insertRoom(&myhouse,keittio, "keittio", 15);
    int olohuoneindex = insertRoom(&myhouse,olohuone, "olohuone", 20);
    int makuuhuoneindex = insertRoom(&myhouse,makuuhuone, "makuuhuone", 12);
    int lastenhuoneindex = insertRoom(&myhouse,lastenhuone, "lastenhuone", 12);
    
    // Luo kalusto ja liitä kalusto huoneeseen
    struct Equipment valtaistuin, suihku, liesi, 
    pesukone, sohva, televisio, sanky1, sanky2, 
    kelloradio, lelukori;
    int valtaistuinindex = insertEquipment(&myhouse,wcindex , valtaistuin, "valtaistuin");
    int suihkuindex = insertEquipment(&myhouse,wcindex , suihku, "suihku");
    int liesiindex = insertEquipment(&myhouse,keittioindex , liesi, "liesi");
    int pesukoneindex = insertEquipment(&myhouse,keittioindex , pesukone, "pesukone");
    int sohvaindex = insertEquipment(&myhouse,olohuoneindex , sohva, "sohva");
    int televisioindex = insertEquipment(&myhouse,olohuoneindex , televisio, "televisio");
    int sanky1index = insertEquipment(&myhouse,makuuhuoneindex , sanky1, "sanky");
    int kelloradioindex = insertEquipment(&myhouse,makuuhuoneindex , kelloradio, "kelloradio");
    int sanky2index = insertEquipment(&myhouse,lastenhuoneindex , sanky2, "sanky");
    int lelukoriindex = insertEquipment(&myhouse,lastenhuoneindex , lelukori, "lelukori");

    // Luokaa uusia huoneita:
    // Keittiö: Liesi ja Pesukone
    // Olohuone: Sohva ja Televisio
    // Makuuhuone: sänky ja kelloradio
    // Lastenhuone: sänky ja lelukori

    // Tulosta mitä huoneita talosta löytyy?
    // Kerro myös jokaisen huoneen varusteet
    printf("House");
    for (int iter=0; iter < myhouse.huonelkm; iter++) {
        printf("\nhuone %x", myhouse.huonelista[iter] );
        printf("\nNimi: %s", myhouse.huonelista[iter].nimi );
        printf("\nkoko: %d", myhouse.huonelista[iter].koko );
        //printf("\nvarustelkm: %d", myhouse.huonelista[iter].varustelkm );
        printf("\n--------------");
        for (int iter2=0; iter2 < myhouse.huonelista[iter].varustelkm; iter2++) {
            printf("\n%s", myhouse.huonelista[iter].varustelista[iter2].nimi );
        }
        printf("\n==============");
    }
 
    // Lisää Taloon funktio, joka kirjoittaa jotain.
    myhouse.KerroOmistaja = &getOwner;
    myhouse.KerroOmistaja(&myhouse);
 
    printf("\n Equipment");
    // Hae tieto, missä kelloradio on?
    

    // Tässä etsitty varustelista jossa on kelloradio ja kopioitu sen osoite.
    struct Equipment* kelloratio;
    for (int iter=0; iter < myhouse.huonelkm; iter++) {
        for (int iter2=0; iter2 < myhouse.huonelista[iter].varustelkm; iter2++){
            printf("\n nimi: %s",myhouse.huonelista[iter].varustelista[iter2].nimi);
            if (strcmp(myhouse.huonelista[iter].varustelista[iter2].nimi, "kelloradio")==0){
                kelloratio=&(myhouse.huonelista[iter].varustelista[iter2]);
            }
        }
    }
    
    //kun kelloratio on löydetty sillä voidan etsiä muuta.
    printf("\nKelloradio on huoneessa %s.",kelloratio->huone->nimi);
    printf("\nKelloradio on huoneessa %s.",((*(*(kelloratio)).huone)).nimi);
   
    // kuka omistaa talon, jossa on kelloradio?
    printf("\nTalon omistaa %s.",kelloratio->huone->talo->omistaja);
    printf("\nTalon omistaa %s.",((*(*(*(kelloratio)).huone).talo)).omistaja);

    // Kuka omistaa talon, jossa on keittio?
    // printf("\nTalon omistaa %s.", keittio.talo->omistaja);

    return 0;
}

