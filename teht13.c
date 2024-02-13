#include <stdio.h>

int main () {

float arvo1 = 150.123456;
int arvo2 = 7;

printf("Desimaaliluku %.7f kentän leveys %d", arvo1, arvo2);
printf("\n");

float arvo3 = 123.456789;
int arvo4 = 15;

printf("Desimaaliluku %.7f kentän leveys %d", arvo3, arvo4);
printf("\n");

printf("%c Taulukkoon sijoitettu teksti Hojo hojo kuis menee?");
printf("\n");

int arvo5 = 9;
printf("- tulosta kentän leveyteen %d", arvo5);
printf("\n");

int arvo6 = 21;
printf("- tulosta kentän leveyteen %d", arvo6);
printf("\n");

int arvo7 = 30;
printf("- tulosta kentän leveyteen %d", arvo7);
printf("\n");

getchar();
 return 0;
}

/*
 Tehtävä
 Tee ohjelma joka tulostaa seuraavat luvut ja tekstit annetun mittaisiin kenttiin. 
 Tallenna nimellä teht_10.
 
 Desimaaliluku 150,123456 kentän leveys 7
 Desimaaliluku 123,456789 kentän leveys 15
 Taulukkoon sijoitettu teksti Hojo hojo kuis menee? 
  - tulosta kentän leveyteen 9
  - tulosta kentän leveyteen 21
  - tulosta kentän leveyteen 30

  */