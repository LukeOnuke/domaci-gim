#include <stdio.h>
#include <string.h>

#define PLJESKAVICA_PRODAVNICA "Prodavnica br 41"

int main() {
    //ha ha ha komentar
    /*ha ha ha komentar 2*/

    int pljeskavicaID;
    char ponfrit;
    char kola;
    char pljeskavica[100];
    int cena = 0;

    printf("Generator narudzbine pleskavica v1.0\n");
    printf("Molimo ukucajte br narucene pljeskavice od sledecih varianti \n\t1 : Normalna\n\t2 : Punjena\n\t3 : Gurmanska\n\t4 : Hot Chilli\n");
    printf("Ukucajte broj > ");
    scanf("%i", &pljeskavicaID);
    getchar();
    printf("Da li je musterija narucila ponfrit uz pljesku (Y/N): ");
    ponfrit = getchar();
    getchar();
    printf("Da li je musterija narucila kolu uz pljesku (Y/N): ");
    kola = getchar();
    getchar();

    switch (pljeskavicaID) {
        case (1) : {
            strncpy(pljeskavica, "Normalna", 15);
            
            cena += 120;
            break;
        }
        case (2) : {
            strncpy(pljeskavica, "Punjena", 15);
            cena += 140;
            break;
        }
        case (3) : {
            strncpy(pljeskavica, "Gurmanska", 15);
            cena += 160;
            break;
        }
        case (4) : {
            strncpy(pljeskavica, "Hot Chilli", 15);
            cena += 170;
            break;
        }
        default:{
            strncpy(pljeskavica, "Normalna", 15);
            cena += 120;
        }
    }

    if(kola == 'y' || kola == 'Y'){
        cena += 75;
    }

    if(ponfrit == 'y' || ponfrit == 'Y'){
        cena += 120;
    }

    for(int i=0; i <= 25; i++){
        printf("\n");
    }

    float cenaSaPorezom = cena * 0.80f;

    printf("%s Narudzbina:\n\tNarucio/la je pljeskavicu : %s\n\tNarucio/la je ponfrit : %c\n\tNarucio/la je kolu : %c\n\n\t\tCena bez poreza : %i\n\t\tCena sa porezom : %.2f", PLJESKAVICA_PRODAVNICA, pljeskavica, ponfrit, kola, cena, cenaSaPorezom);
    return 0;
}
