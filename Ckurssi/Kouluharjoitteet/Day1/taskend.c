#include <stdio.h>
int main() {
  // ILTAPÄIVÄN TEHTÄVÄ
    // ==================

    // Kysy nimi, ikä ja pankkitilin summa.
    // tulosta "Minä olen X ja ikäni on Y."
    // tulosta "50 vuoden kuluttua ikäni on Z."
    // tulosta "Tililläni on rahaa vain aaa.bb euroa."

    char taskname[15] = "";
    int taskage = 0;
    float taskaccount = 0.0;
    
    printf("\nGive me a name?\n");
    scanf("%s",&taskname);
    printf("\nGive me age?\n");
    scanf("%d",&taskage);
    printf("\nGive me account balance?\n");
    scanf("%f",&taskaccount);

    // tulosta "Minä olen X ja ikäni on Y."
    printf("\nMinä olen %s ja ikani on %d\n", taskname, taskage);
    // tulosta "50 vuoden kuluttua ikäni on Z."
    printf("\n50 vuoden kuluttua ikani on %d.\n", taskage + 50);
    // tulosta "Tililläni on rahaa vain aaa.bb euroa."
    printf("\nTilillani on rahaa vain %.2f euroa.\n", taskaccount);

    return 0;
}