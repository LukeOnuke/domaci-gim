#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("(C) 2022 Luka Kresoja - Domaci Zadatak za 9.5.2022\n");
    printf("Sve je stavljeno u jedan program jer je glupo da budu dva razlicita fajla za slicnu svrhu.\n");
    printf("Strukture su predstavljene u java \"Object.toString()\" stilu : \n[Ime]@[Lokacija u memoriji]([promenjiva1], [promenjiva2], ..., [promenjivan]) .\n");
    printf("--------------------------------------------------\n");
    struct Korisnik{
        int id;
        int brojPratioca;
        struct Korisnik *sledeci;
    } Korisnik;

    struct Korisnik *koren = malloc(sizeof(Korisnik));
    struct Korisnik *selektor = koren;

    int velicina = 5, i = 0;
    printf("Unesite broj korisnika:");
    scanf("%d", &velicina);

    for(i = 0; i < velicina; i++){
        selektor->id = i;
        selektor->sledeci = malloc(sizeof(Korisnik));

        printf("Unesite broj pratioca korisnika:");
        scanf("%d", &selektor->brojPratioca);

        selektor = selektor->sledeci;
    }
    selektor->sledeci = NULL;

    selektor = koren;
    while(selektor->sledeci != NULL){
        // %x je heksadecimalni broj
        // Ako broj heksadecimanih cifara u pointeru pripada >=4 && <=8 to znaci da je racunar 64bitni.
        printf("Korisnik@%x[id=%d, brojPratioca=%d]\n", selektor, selektor->id, selektor->brojPratioca);
        selektor = selektor->sledeci;
    }
}
