#include<stdio.h>
/*
 © 2020 Luka Kresoja https://lukeonuke.com
 DZ za 8.9.2020
*/
void main(){
    printf("1. zadatak iz domaceg za I9 uradzen u C\n");

    int input; // deklarisi variabl input

    printf("Ukucajte broj: ");
    scanf("%d", &input); // %d - selektor za int | & - govori sta je buffer

    int jedinica = input % 10;
    int rezultat = (input / 100) + ((input % 100 - jedinica) / 10) + jedinica;

    //debugging
    if(1 == 0){
        printf("c1: %d \n", (input / 100));
        printf("c2: %d \n", ((input % 100 - jedinica) / 10));
        printf("c3: %d \n", jedinica);
    }

    printf("Zbir cifara trocifrenog broja je: %d", rezultat);

    return 0;
}
